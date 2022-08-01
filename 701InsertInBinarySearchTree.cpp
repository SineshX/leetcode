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

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) 
    {
         if(root == nullptr) return new TreeNode(val);
        TreeNode* ptr = root;
      TreeNode* parent = nullptr;
      while(ptr != nullptr)
      { 

          if(ptr->val < val)
          {
              parent = ptr;
              ptr = ptr->right;
          }else{
              parent = ptr;
              ptr = ptr->left;
          }
      }
      // means ptr is null and we need to insert ; 
      ptr = new TreeNode(val);
      if(parent->val < val) 
      {
          parent->right = ptr;
      }else{
          parent->left= ptr;
      }
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
