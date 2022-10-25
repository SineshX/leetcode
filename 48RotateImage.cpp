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
class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int m = matrix.size();
        int n = matrix[0].size();

        if( m < 2) return;

    // no of rotation
        for (int i = 0; i < m/2; i++)
        {
            for (int j = i; j < n-i-1; j++ )
            {
                // perform rotation 
                // 4 rotation 
                int temp = matrix[j][n-i-1];
                matrix[j][n-i-1] = matrix[i][j];


                int temp2 = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = temp;

                temp = matrix[n-j-1][i];
                matrix[n-j-1][i] = temp2;

                matrix[i][j] = temp;



            }
        }

    }
};

class Solution2
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        
        // revrese
        reverse(matrix.begin(), matrix.end());
        
        //swap symmetrix // transpose
        for(int i =0; i <n; i++)
        {   
            for( int j = i+1; j < n; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
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
