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
    
    int maxDepth(TreeNode* root) 
    {
        if(root == nullptr) return 0;
        
        queue<pair<TreeNode*, int>> openlist;

        openlist.push({root, 0});
        int max_height = 0;
        

        while(!openlist.empty())
        {
            pair <TreeNode*, int> p = openlist.front();
            openlist.pop();
            //print
            TreeNode* ptr = p.first;
            int level = p.second;
            // child level
            level++;
            max_height = max(max_height, level);
            if(ptr->left != nullptr) openlist.push({ptr->left,level});
            if(ptr->right != nullptr) openlist.push({ptr->right, level});

        }
        return max_height;
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
