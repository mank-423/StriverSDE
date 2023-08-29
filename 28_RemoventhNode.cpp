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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //Two pointer method
        ListNode * ptr = new ListNode();
        ptr->next = head;

        ListNode * fast = ptr;
        ListNode * slow = ptr;

        //Taking fast ptr to nth node
        for (int i = 0; i <= n; i++){
            fast = fast->next;
        }

        //Moving slow and fast by each step until
        //fast reaches end
        while (fast != NULL){
            slow = slow->next;
            fast = fast->next;
        }

        //Deleting/ignoring the node
        slow->next = slow->next->next;

        return ptr->next;
    }
};

int main()
{
return 0;
}