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
    int majorityElement(vector<int>& nums) 
    {
        int count = 0 ;
        int major = 0;
        for (int i : nums)
        {
            if ( count  == 0)
            {
                major  = i;
                count ++;
            }
            else if (major  == i)
            {
                count ++;
            }
            else 
                count--;
            // simply count+= (major == i)?1:-1;
        }
        
        return major;
    }
};


class Solution1 {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int, int> mp;
        for(auto &i : nums)
        {
            mp[i]++;
        }
        
        int max = 0;
        int ans = 0;
        for (auto &i : mp)
        {   
            if(i.second>max)
            {
                max = i.second;
                ans = i.first;
            }
            
        }
        
        return ans;
    }
};

class Solution2 {
public:
    int majorityElement(vector<int>& nums) 
    {
        int ans = 0;
        int n = nums.size(); 
        
        for (int i = 0 ; i < 32 ; i++)
        {
            // set bit for ith pos (left shift)
            int bit = 1 << i;
            int count = 0;
            for (int j: nums)
            {
                //count set bit
                if( (j & bit) != 0) 
                    count++;
            }
            
            // check major bit
            if( count > n/2) 
                ans |= bit;
            
        }
        return ans;
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
