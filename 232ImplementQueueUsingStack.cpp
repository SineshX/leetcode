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
class MyQueue {
public:
    stack<int> st;
    stack<int> ct;
    MyQueue() {
    }
    
    void push(int x) {
        
        st.push(x);
        
    }
    
    int pop() {
        // remove from front
        while(!st.empty())
        {   
            ct.push(st.top());
            st.pop();
        }
        int c = ct.top();
        ct.pop();
        while(!ct.empty())
        {
            st.push(ct.top());
            ct.pop();
        }
        
        return c;
    }
    
    int peek() {
        while(!st.empty())
        {   
            ct.push(st.top());
            st.pop();
        }
        int c = ct.top();
        while(!ct.empty())
        {
            st.push(ct.top());
            ct.pop();
        }
        
        return c;
        
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
