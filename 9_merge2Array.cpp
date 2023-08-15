#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //Swap elements
        int left = m - 1;
        int right = 0;

        //Left ptr for nums1 end, and right for nums2 start
        //Compare if left > right if yes then swap, else end
        while (left >= 0 && right < n){
            if (nums1[left] > nums2[right]){
                swap(nums1[left], nums2[right]);
                left--,right++;
            }else{
                break;
            }
        }

        //Sorting the array after swapping values
        sort(nums1.begin(), nums1.begin()+ m);
        sort(nums2.begin(), nums2.end());

        //Putting the values of the right array in left
        int p1 = m;
        for (int i = 0; i < nums2.size(); i++){
            nums1[p1++] = nums2[i];
        }

        for (int y: nums1){
            cout << y << " ";
        }
    }
};

int main()
{
return 0;
}