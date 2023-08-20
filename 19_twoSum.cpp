#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSumBinSearch(vector<int>& nums, int target) {
        
        vector<int> result;
        vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());
        //Binary search appraoch
        int l = 0;
        int h = nums.size() - 1;
        while (l <= h){
            if (sortedNums[l] + sortedNums[h] == target){
                cout << sortedNums[l] << sortedNums[h] << target;
                break;
            }else if (sortedNums[l] + sortedNums[h] > target){
                h--;
            }else{
                l++;
            }
        }

        for (int i = 0; i < nums.size(); i++){
            if (nums[i] == sortedNums[l] || nums[i] == sortedNums[h]){
                result.push_back(i);
            }
        }

        return result;

    }

    vector<int> twoSumHash(vector<int>& nums, int target) {
        map<int, int> storeIndex;
       
        // for (int i = 0; i < nums.size(); i++){
        //     storeIndex[nums[i]].push_back(i);
        // }
        
        for(int i = 0; i < nums.size(); i++){
            
            //if find doesn't find key returns .end() iterator
            if(storeIndex.find(target - nums[i]) == storeIndex.end())
                storeIndex[nums[i]] = i;
            
            else
                return {storeIndex[target - nums[i]], i};
        }
        
        return {-1,-1};
    }
};

int main()
{
    return 0;
}