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
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 2; ++i)
        {
            if(nums[i] > 0) break;
            // Not required to check one more time
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int l = i+1;
            int r = nums.size()-1;
            while(l < r)
            {
                if(nums[i] + nums[l] + nums[r] == 0)
                {
                    res.push_back({nums[i], nums[l], nums[r]});
                    // Jump over duplicates
                    while(l < r && nums[l] == nums[l+1]) ++l;
                    ++l;
                }
                else if(nums[i] + nums[l] + nums[r] > 0) --r;
                else ++l;
            }
        }
        
        return res;
    }
};
void print2DVector(vector<vector<int>> vect)
{  
    for (auto &i : vect)
    {
        for(auto &j : i) cout << j << " ";
        cout << endl;
    }
}
void solve()
{
    // take inputs if needed 
    
    Solution s;
    vector<int> v = {{0, 0 , 0}};
    print2DVector(s.threeSum(v));
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
