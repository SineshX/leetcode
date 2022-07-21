#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 
class Solution {
public:
    bool isAnagram(string s, string t) 
    {   
        if(s.size() != t.size()) return false;
        int arr[26] = {0};
        // for s
        for(auto &i:s) arr[i-'a']++;
        
        for(auto &i : t) arr[i-'a']--;
        
        for(auto &i : t) {
            if( arr[i-'a'] != 0 ) return false;
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
