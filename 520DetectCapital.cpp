#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
// 520. Detect Capital
// https://leetcode.com/problems/detect-capital/description/
class Solution {
public:
    bool detectCapitalUse(string word) 
    {   
        // A-Z == [65-90]
        // a-z == [97- 122]
        int n = word.size();
        if (n == 1) return true;
        // check 1st letter is capital
        if ('Z'-word[0] >= 0) 
        {
            if ('Z'-word[1] < 0)
            {
                // since 2nd letter is small 
                // all should be small 
                for (int i = 1; i < n; i++ )
                {
                    if(word[i] - 'a' < 0) return false; 
                }

            }else{
                // rest all shpuld be Capital 
                for (int i = 1; i < n; i++ )
                {
                    if('Z'-word[i] < 0) return false; 
                }
            }
        }
        else
        {
            // small start to end 
            for (auto c : word)
            {
                if (c-'a' < 0) return false;
            }
        }
        return true;
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
