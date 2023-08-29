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
    void deleteNode(ListNode* node) {
        //nextNode will be the next ptr to node
        ListNode * nextNode = node->next;
        //Copy the value of nextNode to the node
        node->val = nextNode->val;
        //Make next of currentPtr to newNode->next;
        node->next = nextNode->next;
        //Break the chain and delete
        nextNode->next = nullptr;
        delete(nextNode);
    }
};

int main()
{
return 0;
}