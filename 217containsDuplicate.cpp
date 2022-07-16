#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<unordered_map>
#include<set>
#include<map>


using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution  here
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        // unordered_map<int,int> mp;
        // for(auto i : nums)
        // {
        //     mp[i]++;
        // }
        // if(mp.size() == nums.size() )
        //     return false; 
        // else return true;
        
        // set<int> s(nums.begin(), nums.end());
        // if(s.size() == nums.size() ) return false; 
        // return true;
        
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
};
void solve()
{
    // take inputs if needed 
    
    // Solution s;
    // s.;
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
