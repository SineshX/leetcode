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
class Solution {
public:
    string addStrings(string num1, string num2) 
    {   
        int i = num1.size()-1; 
        int j = num2.size()-1;
        int carry = 0;
        string ans = "";
        
        while( i>=0 || j>=0 || carry)
        {   
            int sum = 0;
            if(i>=0){sum+=(num1[i]-'0');i--;}
            if(j>=0){sum+=(num2[j]-'0');j--;}
            
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            
            ans += to_string(sum);
            
        }
        reverse(ans.begin(), ans.end());
        
        return  ans;
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
