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

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// method 1

class Solution {
public:
    int sum = 0;
    bool flag = false;
    void pathsum(TreeNode* root, int &targetsum)
    {
        if (root ==nullptr ) return;
        sum+=root->val;
        
        pathsum(root->left, targetsum);
        pathsum(root->right,targetsum);
        
        //means both are null 
        if(targetsum == sum && root->left == nullptr && root->right == nullptr ) flag = true;
        else{
            sum-=root->val;
        }
    }
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if (root ==nullptr ) return false;
        pathsum(root, targetSum);
        
        return flag;
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
