#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>

using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {   
        
        for (int i = 0;i < 9; i++)
        {   
            unordered_set<char> row; //row
            unordered_set<char> col; //column
            unordered_set<char> box; //box
            for(int j = 0; j < 9 ; j++) 
            {   
                // check for row
                if(board[i][j] != '.' ) 
                {
                    if(!row.insert(board[i][j]).second ) return false;
                }
                
                //check col
                if(board[j][i] != '.' ) 
                {
                    if(!col.insert(board[j][i]).second ) return false;
                }
                
                //check box (sub sudoku)
                if(board[(i/3) * 3 + j/3][(i%3) * 3 + j%3] != '.' ) 
                {
                    if( !box.insert( board[(i/3) * 3 + j/3][(i%3) * 3 + j%3]).second ) return false;
                }
                
            }
            
            
            
        }
        return true;
        
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
