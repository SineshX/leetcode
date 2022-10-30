#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<numeric>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    // subarray // substring - contigous
    // Time Complexity: 0(n^3)
    //  total no of subarray : n*(n+1)/2
    for( int i = 0; i < n; i++)
    {   
        // cout<<arr[i]<<" ";
        for( int j = i ; j < n; j++)
        {   
            // cout<<arr[j]<<" ";
            for( int k = i; k <= j ; k++)
                cout<<arr[k]<<" ";
            cout<<endl;
            
        }
    }

    // subset/ subsequence -- non contigous
    // Time Complexity: 0(n*(2^n))
    //  total no of subarray : (2n-1)
    cout<<"Hello : here is ur subsequence, subset"<<endl;

    unsigned int size = pow(2, n);

    for( int count = 1; count < size; count++)
    {
        for( int i = 0; i < n; i++)
        {
            /* Check if ith bit in the count is set
                If set then print jth element from arr[] */
            if( count & (1<<i))
                cout<<arr[i]<<" ";
             

        }
        cout<<endl;
    }


}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
