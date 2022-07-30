#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    bool leftright(TreeNode *leftchild, TreeNode* rightchild)
    {
        if(leftchild == nullptr && rightchild == nullptr) return true;
        
        if( leftchild == nullptr || rightchild == nullptr ) return false;

        // bith value are nonNUll

        if( leftchild->val != rightchild->val ) return false;

        return leftright(leftchild->left , rightchild->right) 
                && leftright(leftchild->right, rightchild->left) ;
    }
    bool isSymmetric(TreeNode* root) 
    {
        if(root == nullptr ) return true;

        return leftright(root->left, root->right);
    }






    
    //one way : my naive solution; 
    bool isSymmetric2(TreeNode* root) 
    {
        if(root == nullptr ) return true;

        queue<pair<TreeNode* , int>> q; 
        vector<vector<int>> ans; 

        q.push({root, 0});
        while(!q.empty())
        {
            TreeNode *ptr = q.front().first;
            int level = q.front().second;
            q.pop();

            if(ans.size() == level) 
            {   
                ans.push_back( vector<int> () );
            }
            if(ptr != nullptr )
                ans[level].push_back(ptr->val);
            else
            {
                ans[level].push_back(INT_MIN);
                continue;
            }

            level ++; 

            q.push({ptr->left, level});
            q.push({ptr->right, level});


        }

        //now we have ans ready 
        for(auto i : ans)
        {
            if(!equal(i.begin(), i.end(), i.rbegin())) 
            {
                return false;
            }
        }
        return true;
    }
};

void solve()
{
    // take inputs if needed 
    
    // Solution s;
    // s.function_name;
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll test=1;
//cin>>test;
    while(test--) solve();
    return 0;
}
