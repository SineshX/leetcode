#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<stack>
using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 
//  Definition for a binary tree node.
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void preorder(TreeNode *root, vector<int> &ans)
    {
        if(root == nullptr) return;
        ans.push_back(root->val);
        preorder(root->left, ans);
        preorder(root->right, ans);
    }
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        preorder(root, ans);
//         stack<TreeNode*> rstack,lstack;
        
//         if ( root == nullptr) return ans;
        
//         TreeNode *ptr;
//         if(root->left != NULL) 
//         {
//             lstack.push(root->left);
//         }
//         // l = root->left;
        
//         if (root->right != NULL)
//             rstack.push(root->right);
        
        
//         ans.push_back(root->val);
        
        
//         while( !(rstack.empty() && lstack.empty()) )
//         {
           
//             if(!lstack.empty()) 
//             {   
//                 ptr  = lstack.top();
//                 lstack.pop();
//                 ans.push_back(ptr->val);
                
//                 if (ptr->right != NULL)
//                     rstack.push(ptr->right);
//                 if (ptr->left != NULL)
//                     lstack.push(ptr->left);
//                 continue;
//             }
          
//             //explore right
//             if(!rstack.empty() )
//             {
//                 ptr  = rstack.top();
//                 rstack.pop();
//                 ans.push_back(ptr->val);
                
//                 if (ptr->right != NULL)
//                     rstack.push(ptr->right);
                
//                 if (ptr->left != NULL)
//                     lstack.push(ptr->left);
//             }
          
//         }

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
