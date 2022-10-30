#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<stack>
#include<string>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution {
public:
    string frequencySort(string s) 
    {
        unordered_map<char, int> mp;
        for(auto&i:s)
        {
            mp[i]++;
        }
        priority_queue<pair<int, char>> pq;
        
        for(auto&i:mp)
        {
            pq.push({i.second,i.first});
        }
        string ans = "";
        while(!pq.empty())
        {
            pair<int,char> p = pq.top();
            if(p.first == 1) ans+=p.second;
            else
            {   
                string a = "";
                for(int i =0; i < p.first ; i++)
                {
                    a+=p.second;
                }
                ans+=a;
            }
            pq.pop();
        }
        // reverse(ans.begin(), ans.end());
        return ans;
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
