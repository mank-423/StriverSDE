#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();

        //Sort the array
        sort(nums.begin(), nums.end());

        //Fixing i for each loop
        for (int i = 0; i < n; i++){
            //If duplicate then continue
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            //Fixing j for each loop
            for (int j = i+1; j < n; j++){
                //If duplicate then continue
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                //Using the two pointers
                int k = j + 1;
                int l = n - 1;

                while (k < l){
                    //Calculating sum
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    //Target found!
                    if (sum == target){
                        vector<int> t = {nums[i],nums[j],nums[k],nums[l]};
                        res.push_back(t);
                        k++; l--;

                        //Duplicates
                        while (k < l && nums[k] == nums[k-1]) k++;
                        while (k < l && nums[l] == nums[l+1]) l--; 
                    }
                    else if (sum > target) l--;
                    else k++;
                }
            }
        }

        return res;
    }
};

int main()
{
return 0;
}