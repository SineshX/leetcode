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
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
ListNode* deleteDuplicates(ListNode* head) 
{
    if(head == NULL || head->next == NULL) return head;
    
    ListNode *curr = head->next, *ptr = head, *temp;
    
    while( curr )
    {
        if(ptr->val == curr->val) 
        {
            //remove the node
            temp = curr;
            ptr->next = curr->next;
            curr = curr->next;
             
            delete(temp);
            
        }else{
            ptr = curr;
            curr = curr->next;
        }
    }
    
    //return head
    return head;
    
    
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
