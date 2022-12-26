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
// https://leetcode.com/problems/two-sum/submissions/
class Solution2 {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int, int> mp;
        for(int i=0,n=nums.size(); i < n; i++)
        {
            if(mp.find(nums[i]) == mp.end()) 
            {
                // not found 
                // add target-nums[i]
                mp[target-nums[i]] = i;
                // stored index as well 
            }else{
                vector<int> v;
                v.push_back(mp[nums[i]]);
                v.push_back(i);
                return v;
            }
        }
        return {};
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> v;
//         for (int i=0, n = nums.size() ; i<n-1; i++)
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 if(nums[i]+nums[j] == target)
//                 {
                    
//                     v.push_back(i);
//                     v.push_back(j);
//                     return v;
//                 }
//             }
//         }
//          return v;
        
        unordered_map<int, int> map; 
        for (int i = 0 , n = nums.size(); i < n; i++)
        {
            int find_num = target - nums[i];
            
            auto itr = map.find(find_num);
            
           
            
            if(itr == map.end())
            {
                map[nums[i]] = i;
                continue;
            }
             v.push_back(map[find_num]);
            v.push_back(i);
           
            return v;
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
