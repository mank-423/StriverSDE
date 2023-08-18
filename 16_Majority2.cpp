#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        //Brute force with O(n*n)
        int n = nums.size();
        vector<int> res;
        vector<int> temp;

        //Using set to get rid of duplicates
        set<int> s;
        for(int i = 0; i < n; i++){
            s.insert(nums[i]);
        }

        //Now taking set values to temp
        for (int i : s){
            temp.push_back(i);
        }

        //Now first loop for temp with non duplicate values
        //Inside loop to check through nums
        for (int i = 0; i < temp.size(); i++){
            int count = 0;
            for (int j = 0; j < n; j++){
                if (nums[j] == temp[i]){
                    count++;
                }
            }

            if (count > (n/3)){
                res.push_back(temp[i]);
            }
        }

        return res;
    }
};

int main()
{
return 0;
}