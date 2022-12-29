#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        // unirdered_map<char, int> mp;
        int max_len = 0; 
        string str = "";
        for(auto &c:s)
        {
            if(str.find(c) == -1)
            {
                str += c;
            }
            else{
                // char is present 
                if( str.length() > max_len ) max_len = str.length();
                // // get from pos to the end
                str = str.substr(str.find(c)+1 ) + c;
            }
        }
        if( str.length() > max_len ) max_len = str.length();

        return max_len;
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
