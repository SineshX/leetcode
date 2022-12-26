#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
// better solution for two sum problem when array is sorted ;
class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {   
        int start = 0,end = nums.size()-1;
        while(start<end)
        {
            int total = nums[start] + nums[end];
            if (total == target ) return {start+1, end+1};
            
            if(total < target) start++;
            else end--;
        }  
        return {start+1, end+1};     
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {   
        vector<int> v;
        map<int, int> mp;

        for(int i =0, n = nums.size(); i < n ; i++ )
        {
            if(mp.find(nums[i]) == mp.end() )
            {
                // not found 
                // add target - arr[i]
                mp[target-nums[i]] = i+1;
            }else{
                // found the pair 
                v.push_back(mp[nums[i]]);
                v.push_back(i+1);

                return v;
            }
        }
        return v;
        
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
