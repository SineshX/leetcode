#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {   
        
        int n = nums.size();
        int i = 0 ;
        while( i < n && nums[i] < 0) i++;
        // a while loop can cause you 30 mins of time if you dont check overflow condition;  
        int j = i-1; 

        vector<int> v; 
        while( (i < n) && (j >= 0))
        {
            if(abs(nums[i])  < abs(nums[j]) )
            {
                v.push_back(nums[i]*nums[i]);
                i++;
            }else{
                v.push_back(nums[j]*nums[j]);
                j--;
            }
        }
    // cout<<endl<<i<<j<<endl;
    //     dono me se koi ek hi chalega :)
        while(j >= 0){
             v.push_back(nums[j]*nums[j]);
                j--;
        }
        while( i < n )
        {
            v.push_back(nums[i]*nums[i]);
                i++;
        }

        return v;
    }
};

void solve()
{
    // take inputs if needed 
    // vector<int> v = {-4,-1,0,3,10};
    vector<int> v = {-5,-3,-2,-1};
    // vector<int> v = {-1};
    Solution s;
    v = s.sortedSquares(v);
    for(auto &i:v) cout<<i<<" ";
    

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
