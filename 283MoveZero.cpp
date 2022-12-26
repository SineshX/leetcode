#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int n= nums.size();
        int j = 0; 
        for(int i = 0; i < n; i++)
        {   
            // find non zero element ; 
            if( nums[i] != 0){
                // j start me hai ; to non zero ko waha fill krna suru 
                nums[j] = nums[i];
                j++;
            }

        }
        // baki k bache huye j se n tak zero;

        while(j < n)
        {
            nums[j] = 0;
            j++; 
        }
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
