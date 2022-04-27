/*Given an integer number n, return the 
difference between the product 
of its digits and the sum of its digits.*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum,prod=1,result,dig=0;
        while(n!=0){
            dig=n%10;
          
            sum=sum+dig;
            prod=prod*dig;
              n=n/10;
          
          
        }
          result=prod-sum;
        return result;
    }
};
