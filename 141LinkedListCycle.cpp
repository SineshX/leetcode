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
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
// floyed warsel cycle detection algo
// tortoise method

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow=head, *fast=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};

class Solution2 {
public:
    bool hasCycle(ListNode *head) 
    {   
        unordered_set<ListNode*> s;
        while(head!=NULL)
        {   // if pinter already present it wil refule to add element and return false 
            // hence cycle exist w'll return true;
            if(!s.insert(head).second ) return true  ;
            head = head->next;
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
