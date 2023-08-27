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
    ListNode* reverseList(ListNode* head) {
        //Brute force approach
        vector<int> ar;
        int data;
        int n = 0; 

        ListNode * temp = head;
        ListNode *ptr = head;

        while (temp != NULL){
            data = temp->val;
            ar.push_back(data);
            temp = temp->next;
        }

        n = ar.size();

        for (int i = 0; i < ar.size(); i++){
            data = ar[n - i - 1];
            ptr->val = data;
            ptr = ptr->next;
        }

        

        return head;
    }
};

int main()
{
return 0;
}