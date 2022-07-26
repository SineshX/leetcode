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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
{
    if(list1 == NULL) return list2;
    if(list2 == NULL) return list1;
    ListNode *curr;
    if(list2->val < list1->val) 
    {
        curr = list1; //larger
        list1 = list2; //small 
        
        list2 = curr; //larger beg
    }
    ListNode *head  = list1;
    list1 = list1->next;
    curr = head;
    while(list1 && list2)
    {   
        if( list2->val > list1->val  )
        {
            // ListNode *temp = new ListNode(list1->val);
            // when created by default it has next as null;
            curr->next = new ListNode(list1->val);
            list1 = list1->next; 
        }else{
            curr->next = new ListNode(list2->val);
            list2 = list2->next; 
        }
        curr = curr->next;
    }
    // 2 while loop;
    while(list1 == NULL) 
    {
        curr->next = list2;
        return head;
        
    }
    while(list2 == NULL) 
    {
       curr->next = list1;
        return head;
    }
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
