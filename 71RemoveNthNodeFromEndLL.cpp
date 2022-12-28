#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod 1000000007

// paste class solution 

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        // ListNode* temp() = new ListNode(0);
        if (head == nullptr) return head;
        
        ListNode* temp(0);
        temp = head; 
        int count = 0;
        while( temp != nullptr) 
        {
            count++;
            temp = temp->next;
        }
        if (count == 1) return nullptr;
        else if(n == count) return head->next;
        temp = head;
        count = count-n-1;
        while(count-- and temp) 
            temp = temp->next;

        temp->next = temp->next->next;
        // free that node in future :)
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
