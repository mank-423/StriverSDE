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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * d = new ListNode();
        ListNode * temp = d;
        int carry = 0;

        while ((l1 != NULL || l2 != NULL) || carry){
            int sum = 0;

            if (l1 != NULL){
                sum += l1->val;
                l1 = l1->next;
            }if (l2 != NULL){
                sum += l2->val;
                l2 = l2->next;
            }
            
            //Adding carry to the sum after all addition
            sum += carry;
            //Finding carry from the sum
            carry = sum / 10;
            //If sum > 10, then only one's digit
            ListNode * ptr = new ListNode(sum % 10);
             
            //Forming a new LL
            temp->next = ptr;
            temp = temp->next;

        }

        return d->next;
    }
};


int main()
{
return 0;
}