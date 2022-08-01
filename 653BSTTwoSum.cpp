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

// paste class solution 

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
    void inorder(vector<int> &res,TreeNode* root){
        if(root == nullptr ) return; 
        
        inorder(res,root->left);
        res.push_back(root->val);
        inorder(res, root->right);
    }
    bool findTarget(TreeNode* root, int &k) 
    {
        vector<int> res;
        inorder(res, root);
        for(int i = 0, n = res.size(); i < n-1; i++)
        {
            for(int j = i+1 ; j < n; j++)
            {
                if(res[i] + res[j] == k) return true; 
            }
        }
        return false;
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
