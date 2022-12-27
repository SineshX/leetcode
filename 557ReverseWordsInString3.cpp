#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    string reverseWords(string s) 
    {      
        int start = 0;
        for(int i =0; i < s.size() ; i++)
        {
            if(s[i] == ' ' )
            {
                reverse(s.begin() + start, s.begin() + i );
                start = i+1;
            }
        }

        reverse(s.begin() + start, s.end());
        return s;
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
