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

    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c)
    {   
        int m = mat.size();
        int n = mat[0].size();
        
        if (m*n == r*c ) 
        {
            vector<int > v;
            for(auto i:mat)
            {
                for(auto j : i)
                {
                    // cout<<j<< " ";
                    v.push_back(j);
                }
            }
            
            // create new matrix
            int x=0;
            
            vector<vector<int>> newmat;
            
            newmat.resize(r);
            
            for(auto &i:newmat)
            {   
                i.resize(c);
                for(auto &j : i)
                {
                    // cout<<j<< " ";
                    j = v[x];
                    x++;
                }
            }
            
            return newmat;
            
            
        }
            
        
//         else
        return mat;
        
        
    }
};

void solve()
{
    // take inputs if needed 
    vector<vector<int>> mat = { {1,2},{3,4} };
    int r = 4, c = 1;

    Solution s;
    vector<vector<int>> newmat;
    newmat = s.matrixReshape( mat,r, c );
    // s.print2DVector(newmat);

    
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
