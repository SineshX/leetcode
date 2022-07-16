#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 
class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {   
       int sum = 0; 
        int max_sum = INT_MIN; 
        for (auto i : nums)
        {
            sum += i;
            max_sum = max(sum, max_sum); 
            if (sum<0) sum =0;
        }
        return max_sum;
    }
}; 

void solve()
{
    // take inputs if needed 
    
    Solution s;
    // s.maxSubArray();
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
