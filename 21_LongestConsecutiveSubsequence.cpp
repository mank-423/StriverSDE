#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Sort the array
        sort(nums.begin(),nums.end());
        
        //Boundary condition
        if(nums.size()==0)
        return 0;

        int cnt  = 1; //Temporary counter
        int maxi= -1; //Storing max values
        
        for(int i = 1; i<nums.size(); i++){
            //If elements aren't same
            if(nums[i]!=nums[i-1]){
                //Then their difference == 1
                if(nums[i] - nums[i-1] == 1){
                    cnt++;
                }
                //Otherwise check which is greater
                else{
                    maxi= max(maxi,cnt);
                    cnt=1;
                    
                }
            }
        }
        return max(maxi,cnt);
    }
};

int main()
{
return 0;
}