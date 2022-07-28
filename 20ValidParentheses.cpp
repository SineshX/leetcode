#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<stack>



using namespace std;

#define ll long long
#define mod 1000000007

// pasete class solution 
class Solution {
public:
    bool isValid(string s) 
    {   
        int n = s.size(); 
        
        if(n == 1 || n&1) return false; 
        
        stack<char> st; 
        for(auto i:s)
        {
            switch(i){
                case '(':
                    st.push(i);
                    break;
                case '{':
                    st.push(i);
                    break;
                case '[':
                    st.push(i);
                    break;
                    
                case ')':
                    if ( st.empty()  || st.top() != '('  ) return false;
                    st.pop();
                    break;
                case '}':
                    if (st.empty()  ||  st.top() != '{' ) return false;
                    st.pop();
                    break;
                case ']':
                    if (st.empty()  ||  st.top() != '[' ) return false;
                    st.pop();
                    break;
            }
        }
        
        if(st.empty()) return true;
        else return false;
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
