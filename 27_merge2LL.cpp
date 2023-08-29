#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if (!list1) return list2;
       if (!list2) return list1;

       ListNode * d = new ListNode(INT_MIN, list1);
       ListNode *dd = d, *p1 = list1, *p2 = list2, *head;

        
       while (p1 && p2){
           if (p1->val <= p2->val){
               dd->next = p1;
               p1 = p1->next;
           }else{
               dd->next = p2;
               p2 = p2->next;
           }
           dd = dd->next;
       }

       if (p1){
           dd->next = p1;
       }
       else{
           dd->next = p2;
       }

       head = d->next;

       delete d;

       return head;

    }
};

int main()
{
    return 0;
}