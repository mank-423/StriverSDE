#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int, int> mp; // This map stores the continous sum
        int sum = 0; //Check with sum
        int maxLen = 0;
        //Using presum concept
        
        for (int i = 0; i < n; i++){
            sum += A[i]; //Add sum to currentSum variable
            
            //If sum = 0, cond. satisfied
            if (sum == 0){
                maxLen = i + 1;
            }
            //If the current sum is encountered before,
            //If yes, then it means in bw there was 0 sum
            //Calculate which was maxLength
            else if (mp.find(sum) != mp.end()){
                maxLen = max(maxLen, i - mp[sum]);    
            }
            //If no cond. matches then add to the map
            else{
                mp[sum] = i;
            }
        }
        
        return maxLen;
        
    }
};

int main()
{
return 0;
}