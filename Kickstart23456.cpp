#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ll test=1;
    cin>>test;
    for(int j = 1; j <= test; j++)
    {
        int l,n;
        cin>>l>>n;
        char pdir = 'Z';
        char ndir = 'C';
        int d,comp = 0;
        int laps = 0;
        while(n--)
        {
            cin>>d>>ndir;
            if( pdir == ndir )
            {
                laps += (comp + d)/l; 
                comp = (comp + d)%l;
            }
            else{
                pdir = ndir;
                if( d >= comp)
                {   
                    d = d-comp;
                    laps += d/l;
                    comp = d%l;
                    
                }else{
                    comp = comp - d; 
                }
                
            }
        }
        cout<<"Case #"<<j<<": "<<laps<<endl;
    }
    return 0;
}
