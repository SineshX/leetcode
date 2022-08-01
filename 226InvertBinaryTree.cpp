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
// just post order thing and do the swap ;
class Solution {
public:
    void invert(TreeNode* root)
    {   
        if (root == nullptr ) return;
        invertTree(root->left);
        invertTree(root->right);
        
        TreeNode *ptr = root->left;
        root->left = root->right;
        root->right = ptr;
    }
    TreeNode* invertTree(TreeNode* root) 
    {
        if (root == nullptr ) return root;
        
        invert(root);
        
        return root;
        

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
