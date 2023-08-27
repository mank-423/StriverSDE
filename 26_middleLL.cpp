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
    int sizeOfLL(ListNode * head){
        int count = 0;

        ListNode * curr = head;
        while (curr != NULL){
            count++;
            curr = curr->next;
        }

        return count;
    }

    ListNode* middleNode(ListNode* head) {
        int n = sizeOfLL(head);
        int center = (n / 2);
        int ptr = 0;

        while (ptr != center){
            head = head -> next;
            ptr++;
        }

        return head;
    }
};

int main()
{
return 0;
}