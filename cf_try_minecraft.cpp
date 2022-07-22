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
void solve2()
{
    int n,m;
    cin>>n>>m;

    // colums and height 
    vector<long> v(n);
    for(auto &i : v)
    {
        cin>>i;
    }
    // lets sove //reduced cols
    for(int i = 0; i < n-1; i++)
    {
        v[i] -= v[i+1];
    }
    
    vector<vector<int>> p(m, vector<int>(2,0));

    for( auto &i : p)
    {
        cin>>i[0]>>i[1];
        
    }
    for( auto &i : p)
    {
        i[0]--;
        i[1]--;
        // cout<<a<<b<<endl;
        if(i[1] > i[0])
        {
            //add all positive nums
            long sum =0;
            for (int j = i[0]; j < i[1] ; j++  )
            {   
                if (v[j] < 1) continue;
                sum += v[j];
            }
            cout<<sum<<endl;

        }else{
            long sum =0;
            for (int j = i[1]; j < i[0]; j++ )
            {   
                if (v[j] > 0) continue;
                sum += v[j];
            }
            cout<<sum*(-1)<<endl;
        }
        
    }


}

// void solve()
// {
//     int n,m;
//     cin>>n>>m;

//     // colums and height 
//     vector<long> v(n);
//     for(auto &i : v)
//     {
//         cin>>i;
//     }
//     // lets sove //reduced cols
//     for(int i = 0; i < n-1; i++)
//     {
//         v[i] -= v[i+1];
//     }
    
    
//     for( int x = 0 ; x < m ; x++)
//     {
//         int a,b;
//         cin>>a>>b;
//         a--;
//         b--;
//         // cout<<a<<b<<endl;
//         if(b > a)
//         {
//             //add all positive nums
//             long sum =0;
//             for (int j = a; j < b ; j++  )
//             {
//                 sum += v[j]>0?v[j]:0;
//             }
//             cout<<sum<<endl;

//         }else{
//             long sum =0;
//             for (int j = b; j < a; j++ )
//             {
//                 sum += v[j]<0?v[j]:0;
//             }
//             cout<<sum*(-1)<<endl;
//         }
//     }


// }

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ll test=1;
//cin>>test;
    while(test--) solve2();
    return 0;
}
