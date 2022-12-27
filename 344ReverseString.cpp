#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    void reverseString(vector<char>& s) 
    {
        int n = s.size(); 
        for(int i=0; i < n/2; i++)
        {   
            swap(s[i], s[n-1-i]);
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
