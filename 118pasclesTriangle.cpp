#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 
// https://leetcode.com/problems/pascals-triangle/
class Solution1 {
public:
    vector<vector<int>> generate(int numRows)
    {
       vector<vector<int>> vect(numRows);

    for (int i = 0; i < numRows; i++)
    {
        vect[i].resize(i + 1);
        vect[i][0] = vect[i][i] = 1;
        for (int j = 1; j <= i/2; j++)
        {   
            
            vect[i][j] = vect[i - 1][j - 1] + vect[i - 1][j];
            // + mirror me update
            vect[i][i-j] = vect[i - 1][j - 1] + vect[i - 1][j];
        }
        
    }

    return vect;
    }
};

class Solution {
public:
    vector<vector<int>> generate(int numRows)
    {
       vector<vector<int>> ans(numRows);
        
        for ( int i = 0; i < numRows ; i++)
        {   
            ans[i].resize(i+1);
            ans[i][0] = ans[i][i] = 1;
            for(int j = 1 ; j < i; j++)
            {
                ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
            }
        }
        return ans;
        
    }
};



void solve()
{
    // take inputs if needed 
    
    Solution s;
    vector<vector<int>> v;
    v = s.generate(5);
    for (auto &i : v)
    {
        for(auto &j : i) cout << j << " ";
        cout << endl;
    }

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
