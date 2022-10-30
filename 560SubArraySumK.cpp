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
    int subarraySum(vector<int>& nums, int k) 
    {
        int count = 0, sum = 0; 
        unordered_map<int, int> mp;
        mp[sum] = 1;
        
        for( auto &i:nums)
        {
            sum+=i;
            // if(sum == k) count++;
            if(mp.find(sum-k) != mp.end()) count+=mp[sum-k];
            
            mp[sum]++;
        }
        return count;
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
