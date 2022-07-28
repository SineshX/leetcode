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

// pasete class solution imroved 
class MyQueue {
public:
    stack<int> st;
    stack<int> ct;
    MyQueue() {
    }
    
    void push(int x) 
    {
        if(!st.empty())
        {
            while(!st.empty())
            {
                ct.push(st.top());
                st.pop();
            }
            
        }
          
        st.push(x); 
        
        while(!ct.empty())
        {
            st.push(ct.top());
            ct.pop();
        }
        
        
    }
    
    int pop() {
        
        int c = st.top();
        st.pop();
        return c;
    }
    
    int peek() {
       
        return st.top();
        
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
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
