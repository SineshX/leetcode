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
    bool canConstruct(string ransomNote, string magazine) 
    {
        int arr[26] = {0};
        for(auto &i : magazine )
        {
            arr[i - 'a']++;
        }
        for(auto &i : ransomNote )
        {
            if(arr[i-'a'] > 0)
            {
                arr[i-'a']--;
            }
           else {
                    return false;
                }
        }
        return true;
    }
};

void solve()
{
    // take inputs if needed 
    
    Solution s;
    cout<<s.canConstruct("aa", "aab")<<endl;
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
