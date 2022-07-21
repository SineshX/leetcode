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


void solve()
{
    unordered_map<int,int> map;

    int key;
    cin>>key;
    key--;
    int d[3];
    cin>>d[0]>>d[1]>>d[2];
    for(auto &i : d) i--;


    if(d[key] == -1) cout<<"NO"<<endl;
    else if(d[d[key]] == -1 ) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;




}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ll test=1;
    cin>>test;
    while(test--) solve();
    return 0;
}
