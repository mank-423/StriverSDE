#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //Optimised approach
        //Using binary search
        int low = 0;
        int high = matrix.size() - 1;
        int mid = high / 2;
        int rowSize = matrix[0].size();
        bool res = false;

        while (low <= high){
            if (matrix[mid][0] <= target && matrix[mid][rowSize - 1] >= target){
                res = binary_search(matrix[mid].begin(), matrix[mid].end(), target);
                break;
            }
        
        }

        return res;
    }
};

int main()
{
    return 0;
}