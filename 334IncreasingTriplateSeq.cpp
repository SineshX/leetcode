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
    bool increasingTriplet(vector<int>& nums) 
    {   
        if (nums.size() < 3 ) return false;
        int small = INT_MAX;
        int mid = INT_MAX;
        
        for (auto &i : nums)
        {
            if( i <= small) small = i;
            else if( i <= mid ) mid = i;
            else return true;
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
