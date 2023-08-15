#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end());

        for (int i = 0; i < n; i++){
            //If it doesn't lies in the interval
            if (result.empty() || intervals[i][0] > result.back()[1]){
                result.push_back(intervals[i]);
            }

            //If it does
            else{
                result.back()[1] = max(result.back()[1], intervals[i][1]);
            }
        }

        return result;
    }
};

int main()
{
return 0;
}