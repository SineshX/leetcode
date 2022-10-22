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
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> ans;
        if(intervals.size() < 2) return intervals;
        sort(intervals.begin(), intervals.end());
        int n = intervals.size();
        ans.push_back(intervals[0]);
        
        for(int i = 1; i < n; i++)
        {
            if (ans.back()[1] < intervals[i][0]) 
            {
                ans.push_back(intervals[i]);
            }else
            {
                ans.back()[1] = max(intervals[i][1],ans.back()[1]) ;
            }
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
