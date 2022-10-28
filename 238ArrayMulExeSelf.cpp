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
    vector<int> productExceptSelf(vector<int>& nums) 
    {   
        int c = 0, mul = 1;
        for( auto &i: nums) 
        {
            if (i == 0) c++;
            else mul *= i;
        }
        
        if ( c == 0 )
            for( auto &i: nums) 
                i = mul/i;
        
        else if(c == 1)
        {
            for( auto &i: nums) 
            {
                if (i == 0) i = mul;
                else i = 0;
            }
        }
        else if(c  > 1)
            for( auto &i: nums)
                i = 0;
        
        return nums;
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
