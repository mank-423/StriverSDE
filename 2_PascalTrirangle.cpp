#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        //First making the triangle
        vector<vector<int>>pTrgle;
        for (int i = 0; i < numRows; i++){
            vector<int>temp(i+1);
            if (i == 0){
                temp[0] = 1;
            }
            if(i == 1){
                temp[0] = 1;
                temp[1] = 1;
            }
            else{
                temp[0] = 1;
                for (int j = 1; j < i; j++){
                    temp[j] = pTrgle[i-1][j-1] + pTrgle[i-1][j];
                }
                temp[i] = 1;
            }

            pTrgle.push_back(temp);
        } 
        

        return pTrgle;
    }
};

int main()
{
return 0;
}