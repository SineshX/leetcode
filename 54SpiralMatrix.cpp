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
#include<string>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        vector<int> res;
        
        int n = matrix.size(),count=0;
        int m = matrix[0].size();
        int top = 0,bottom = n-1, left = 0, right = m-1;
        
        while(count < n*m)
        {   
            int i; 
            // print top
            for(i = left; i <= right; i++)
            {
                res.push_back(matrix[top][i]);
                count++;
            }
            top++;
            
            //right
            for(i = top; i <= bottom; i++)
            {
                res.push_back(matrix[i][right]);
                count++;
            }
            right--;
            
            
            // mod
            
            if( top<=bottom ) {    //bottom
                for(i = right; i >= left; i--)
                {
                    res.push_back(matrix[bottom][i]);
                    count++;
                }
                bottom--;
            }
            
            //left
            if( left<=right ) {
            for(i = bottom; i >= top; i--)
            {
                res.push_back(matrix[i][left]);
                count++;
            }
            left++;
            }
            
        }
        return res;
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
