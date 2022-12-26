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
// https://leetcode.com/problems/merge-sorted-array/submissions/
class Solution {
public:
    void merge(vector<int>& num1, int m, vector<int>& num2, int n) 
    {	
      	//m + n and n 
        // if(num2.empty()) return;
        // for(int i = m, j = 0; i < m+n ; i++, j++) num1[i] = num2[j];
        // sort(num1.begin(), num1.end());

        // last element index of num1
        int i = m-1;
        int j = n-1;
        // num 1 ka last element 
        int k = m+n -1;
        while(i >=0 and j>=0)
        {
            if(num1[i] > num2[j])
            {
                num1[k] = num1[i];
                k--;
                i--;
            }else{
                num1[k] = num2[j];
                k--;
                j--;
            }
        }
        while(j>=0)
        {
            num1[k--] = num2[j--];
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
