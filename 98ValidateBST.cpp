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

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
// inorder haxx 
class Solution {
public:
long long pre = LONG_MIN;
    bool flag = true;
    void valid(TreeNode *root)
    {
       
        
    }
    bool isValidBST(TreeNode* root) 
    {
        valid(root);


        if(root==nullptr) return;

        valid(root->left);
        //print root
        if(root->val > pre)
        {
            pre = root->val;
        }else{
            flag = false;
            return;
        }
        valid(root->right);
        return flag;
    }
};


class Solution2 {
public:
    long long pre = LONG_MIN;
    bool flag = true;
    void valid(TreeNode *root)
    {
        if(root==nullptr) return;

        valid(root->left);
        //print root
        if(root->val > pre)
        {
            pre = root->val;
        }else{
            flag = false;
            return;
        }
        valid(root->right);
        
    }
    bool isValidBST(TreeNode* root) 
    {
        valid(root);
        
        return flag;
    }
};





//correct but i didnt like it
class Solution1 {
public:
     bool isValidBST(TreeNode* root) 
     {
         
        TreeNode* pre = NULL;
        stack<TreeNode*> s;
        while(root || !s.empty()){
            while(root){
                s.push(root);
                root=root->left;
            }
            root = s.top();
            s.pop();
            if(pre != NULL && root->val <= pre->val)
                return false;
            pre = root;
            root=root->right;
        }
        
        return true;
    }
};


// not giving corred=ct 
class Solution2 {
public:
    bool validbst(TreeNode *root)
    {
        if( !root->left && !root->right ) return true;
        else if( !root->left || !root->right )
        {   
            if(root->left != nullptr && root->left->val < root->val) 
            {
                return validbst(root->left);
            }
            else if(root->right != nullptr && root->right->val > root->val)
            {
                return validbst(root->right);
            }
            
            return false;
            // return validbst(!root->left?root->left:root->right);
        }
        
        if (root->left->val < root->val && root->right->val > root->val) 
        {
            return validbst(root->right) && validbst(root->left);
        }
        
        return false;
    }
    
    bool isValidBST(TreeNode* root) 
    {
        if (root == nullptr) return true;

    }
};
vector<vector<int>> levelorder(TreeNode* root)
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
    void print2DVector(vector<vector<int>> vect)
        {  
            for (auto &i : vect)
            {
                for(auto &j : i) cout << j << " ";
                cout << endl;
            }
        }
void solve()
{
    Solution s;
    TreeNode* root = new TreeNode(5, new TreeNode(1), new TreeNode(4, new TreeNode(3), new TreeNode(6)));

    cout<<s.isValidBST(root)<<endl;

    // print2DVector(levelorder(root));
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
