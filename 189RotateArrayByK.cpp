#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    void reverse(vector<int>& nums, int start, int end)
    {
        while( start <= end)
        {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) 
    {   
        int n = nums.size();
        k = k%n;
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
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
