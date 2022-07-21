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
// 99% faster : moral jab tak need na ho array hi use karo
class Solution {
public:
    int firstUniqChar(string s) 
    {   int n = s.size();
        int v[26] = {0};
        for(auto &i : s)
        {
            v[i-'a']++;
        }
        for(int i =0; i < n; i++)
        {
            if (v[s[i]-'a'] == 1) return i;
        }
        
        return -1;
        
        
    }
};


// m0
class Solution3 {
public:
    int firstUniqChar(string s) 
    {   
        unordered_map<char, int> map;
        for(auto i : s)
        {
            map[i]++;
        }
        for(int i =0 , n = s.size(); i < n; i++)
        {
            if (map[s[i]] == 1) return i;
        }
        
        return -1;
        
        
    }
};

// half time faster
class Solution2 {
public:
    int firstUniqChar(string s) 
    {   int n = s.size();
        vector<int> v(26,0);
        for(auto i : s)
        {
            v[i-'a']++;
        }
        for(int i =0 , n = s.size(); i < n; i++)
        {
            if (v[s[i]-'a'] == 1) return i;
        }
        
        return -1;
        
        
    }
};

void solve()
{
    // take inputs if needed 
    string s1 = "leetcode";
    Solution s;
    cout<<s.firstUniqChar(s1)<<endl;
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
