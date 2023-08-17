#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 
long long getInversions(long long *arr, int n){
    // Write your code here.
    // sort(arr, arr + n);
    long long left = 0;
    long long mid = n / 2;
    long long high = mid + 1;

    long long count = 0;
    while (left <= mid && high <= n){
        if (arr[left] > arr[high] && left < high){
            count++;
            high++;
        }
        left++; 
    }

    return count;
}


int main()
{
return 0;
}