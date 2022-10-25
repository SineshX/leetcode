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
    vector<vector<int>> generateMatrix(int n) 
    {
        if(n == 1) return {{1}};
        
        vector<vector<int>> v(n, vector<int>(n));
        
        int total = n*n, count= 1;
        int left=0, right = n-1, top =0, bottom = n-1;
        
        
        while( count <= total )
        {
            int i = 0;
            for( i = left ; i <= right ; i++)
            {   //top
                v[top][i]= count;
                count++;
            }
            top++;
                       
            for( i = top ; i<= bottom; i++) 
            {   //right
                v[i][right] = count;
                count++;
            }
            right--;
            
            for( i = right; i >= left && top<= bottom; i--) 
            {   //bottom
                v[bottom][i] = count;
                count++;
            }
            bottom--;
            
            for( i = bottom; i >= top && left<= right; i--) 
            {   //left
                v[i][left] = count;
                count++;
            }
            left++;
            
                        
        }
        
        return v;
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
