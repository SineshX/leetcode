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
class Solution1 {
public:
bool searchMatrix(vector<vector<int>> matrix, int t) 
{
       
        int m=matrix.size();
        int n=matrix[0].size();
        int r = -1;
        
        for(int i=0;i<m;i++)
        {
            
            if( t >= matrix[i][0] && t <= matrix[i][n-1] )
            {  
              
                r=i;
                break;
            }
            
        }

        if(r < 0) return false;
        
        for(int j=0;j<n;j++)
        {
            cout<<r<<endl;
            // cout<<j;
            if(matrix[r][j]==t)
            {
                return true;
                break;
            }
        }
        
        return false;
       
    
}
};

// M2
class Solution2 {
public:
bool searchMatrix(vector<vector<int>> matrix, int t) 
{
       
        for(auto i : matrix)
        {
            if(i.back() == t) return true;
            if(t  < i.back()) 
            {
                if( find(i.begin(), i.end(),t) == i.end()) return false;
                return true;
            }
        }
       return false;
    
}
};

// m3 // moral of the story // front back ki jagh o and n-1 use karo
class Solution {
public:
bool searchMatrix(vector<vector<int>> matrix, int t) 
{
    int n = matrix.size(); 
    int x = matrix[0].size(); 
    int mid,low=0,high=n;
    
    while(low<high)
    {
        mid = (low+high)/2;
        
        if(matrix[mid][x-1]== t) return true;
        
        else if(t < matrix[mid][x-1]) 
        {
            //search low
            if( t >= matrix[mid][0])
            {
                // bianry search 
                if(find(matrix[mid].begin(), matrix[mid].end(), t) != matrix[mid].end()) return true;
            }
            high = mid;
        }
        else{
            //search high
            low = mid+1;
        }
    }
    return false;
    
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
