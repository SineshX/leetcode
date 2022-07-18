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
// https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> map1,map2;
        vector<int> result;
        
        for (auto i : nums1) map1[i]++;
        for (auto i : nums2) map2[i]++;
        
        for (auto i : map1) 
        {
            if(map2.find(i.first) != map2.end())
            {// means found
                int n = min(i.second,map2[i.first]);
                vector<int> r(n,i.first);
                //size,element :) 
                
                result.insert(result.end(), r.begin(), r.end());
            }

            // else continue
            
        }
        
        
        return result;
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
