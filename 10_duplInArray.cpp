#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        //Cycle Detection Algorithm: 
        // Cycle in linked list or repeating pattern in array
        int slow = nums[0];
        int fast = nums[0];

        //Continue as far as slow != fast
        //Both are in a cycle
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while (slow != fast);

        //Finding starting point of cycle
        fast = nums[0];
        while (slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

int main()
{
return 0;
}