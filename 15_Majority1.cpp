#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = -1;
        int votes = 0;
        int count = 0;

        //We need to find the candidate for maximum occurence
        //Linear time 
        for (int i = 0; i < nums.size(); i++){
            //If votes get 0 then choose next one
            if (votes == 0){
                candidate = nums[i];
                votes++;
            }
            //If not, then check if element matches then inc vote
            //Else decrease vote
            else{
                if (nums[i] == candidate){
                    votes++;
                }else{
                    votes--;
                }
            }
        }

        //We need to check the occurrence of our candidate
        for (int i = 0; i < nums.size();i++){
            if (nums[i] == candidate){
                count++;
            }
        } 

        if (count >= (nums.size() / 2)){
            return candidate;
        }else{
            return -1;
        }
    }
};

int main()
{
return 0;
}