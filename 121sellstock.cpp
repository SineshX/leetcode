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
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int max_profit = 0;
        int minprice = prices[0];
        
        for (auto i : prices)
        {
            if (i < minprice) minprice = i;
            if (max_profit < i-minprice) max_profit = i-minprice;
            
        }
        return max_profit; 
        
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
