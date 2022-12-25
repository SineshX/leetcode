#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 
class Solution1 {
public:
    void setZeroes(vector<vector<int>>& vect) 
    {
        
        int m = vect.size(), n = vect[0].size();

    set<int> s;
    set<int> s2;
    // zero vector
    // vector<int> v(m, 0); //zero vector
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vect[i][j] == 0)
            {   //store and do it later 
                s2.insert(i);
                s.insert(j);
                
            }
        }
    }

    // make row zero
    set<int>::iterator it;
    for (it = s.begin(); it != s.end(); it++)
    {
        int j = *it;
        // cout << j << endl;
        int x = m;
        while (x--)
        {
            vect[x][j] = 0;
        }
    }
    //for given set of row
    for (it = s2.begin(); it != s2.end(); it++)
    {
        int i = *it;
        // cout << j << endl;
        // make every column
        int x = n;
        while (x--)
        {
            vect[i][x] = 0;
        }
    }
    }
};
class Solution {
public:
    void setZeroes(vector<vector<int>>& vect) 
    {
        int m = vect.size(), n = vect[0].size();
        int col0 = 1;
        for( int i = 0; i<m; i++ )
        {
            if(vect[i][0]==0)
            col0=0;

            for(int j = 1; j < n; j++)
            {
                if(vect[i][j] == 0)
                {
                    vect[0][j] = vect[i][0] = 0;
                }
            }
        }

        for(int i = m-1; i >= 0 ; i--)
        {
            for(int j = n - 1; j >=1; j--)
            {
                if(vect[i][0] == 0 || vect[0][j] == 0)
                vect[i][j] = 0;
            }
            if( col0 == 0)
            {
                vect[i][0] = 0;
            }
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
