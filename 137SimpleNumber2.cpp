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
    int singleNumber(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        for( int i = nums.size()-1;  i > 1; i-=3 )
        {
            if( (nums[i] == nums[i-1]) && ( nums[i-1] == nums[i-2]))
            {}else return nums[i];
        }
        
        return nums[0];
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
