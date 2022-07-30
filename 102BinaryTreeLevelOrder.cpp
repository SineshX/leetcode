#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<queue> 

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
    vector<vector<int>> levelOrder(TreeNode* root)
    {   
        if(root == nullptr) return {};
        vector<vector<int>> ans;
        queue<pair<TreeNode*, int>> openlist;

        openlist.push({root, 0});

        while(!openlist.empty())
        {
            pair <TreeNode*, int> p = openlist.front();
            openlist.pop();
            //print
            TreeNode* ptr = p.first;
            int level = p.second;

            // vector not init 
            if(ans.size() == level)
                ans.push_back(vector<int>());
            
            ans[level].push_back(ptr->val);
            // child level
            level++;
            
            if(ptr->left != nullptr) openlist.push({ptr->left,level});
            if(ptr->right != nullptr) openlist.push({ptr->right, level});

        }
        return ans;
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
