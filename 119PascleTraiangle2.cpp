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
    vector<int> getRow(int rowIndex) 
    {
        vector<vector<int>> v(rowIndex+1);
        
        int n = rowIndex +1;
        for (int i = 0 ; i < n ; i ++)
        {
            v[i].resize(i+1);
            v[i][0] =  v[i][i] = 1;
            
            for( int j = 1; j < i; j++)
            {
                v[i][j] = v[i-1][j-1] + v[i-1][j];
            }
            
        }
        return v.back();
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
