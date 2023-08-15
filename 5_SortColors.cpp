#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size() - 1;
        
        int low = 0, mid = 0, high = n;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low++], nums[mid++]);
            }
            else if (nums[mid] == 1) {
                mid++;
            }
            else {
                swap(nums[mid], nums[high--]);
            }
        }
    }
};

int main()
{
return 0;
}