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
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {  
        int n = matrix.size();
        if (n == 0) return false;
        int m = matrix[0].size();
        
        int row = 0, col = m-1;
        
        while( row < n && col > -1)
        {
            if(matrix[row][col] == target) return true;
            else if( matrix[row][col] > target ) col--;
            else row++;
        }
        return false;
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
