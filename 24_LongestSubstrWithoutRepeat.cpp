#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Using concept similar to preSum
        int curr = 0;
        int maxLen = 0;
        map<char, int> mp;

        for (int i = 0; i < s.size(); i++){
            //If we find the character in the map
            if (mp.find(s[i]) != mp.end()){
                // Move the start pointer to the 
                // next index after the previous occurrence of the character
               curr = max(curr, mp[s[i]] + 1); 
            }

            //If we don't find the character;
            //If it starts in between then we need current pointer
            int currentLen = i - curr + 1;
            maxLen = max(currentLen, maxLen);

            //Update the map
            mp[s[i]] = i;
        }

        return maxLen;
        
    }
};

int main()
{
return 0;
}