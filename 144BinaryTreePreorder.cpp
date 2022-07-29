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

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
        stack<TreeNode*> rstack,lstack;
        
        if ( root == nullptr) return ans;
        
        TreeNode *l,*r;
        if(root->left != NULL) 
        {
            lstack.push(root->left);
        }
        // l = root->left;
        
        if (root->right != NULL)
            rstack.push(root->right);
        
        
        ans.push_back(root->val);
        
        
        while( !(rstack.empty() && lstack.empty()) )
        {
           
            if(!lstack.empty()) 
            {   
                l  = lstack.top();
                lstack.pop();
                ans.push_back(l->val);
                
                if (l->right != NULL)
                    rstack.push(l->right);
                if (l->left != NULL)
                    lstack.push(l->left);
                continue;
            }
          
            //explore right
            if(!rstack.empty() )
            {
                r  = rstack.top();
                rstack.pop();
                ans.push_back(r->val);
                
                if (r->right != NULL)
                    rstack.push(r->right);
                
                if (r->left != NULL)
                    lstack.push(r->left);
                continue;
            }
          
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
