#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1.00;
        long long nn = n;

        //If power is negative
        if (nn < 0) nn = -1 * nn;

        //While we have power != 0
        while (nn){
            //If pow % 2 == 1
            // 5 % 2 = 1
            if (nn % 2){
                ans = ans * x; // Then we multiply our answer to the original 
                nn--; // Then we subtract it to go for else condn. again
            }
            //Cond. when the no. is even then multiply the nos.
            else{
                // Multiplying the nos.
                x = x * x; 
                //Divide it by 2 to check
                //10 / 2 = 5 (Now it will go to the if cond.)
                nn = nn / 2;  
            }
        }

        //If the power is negative so we make the inverse
        if (n < 0) ans = double(1.0)/ double(ans);

        return ans;
    }
};

int main()
{
return 0;
}