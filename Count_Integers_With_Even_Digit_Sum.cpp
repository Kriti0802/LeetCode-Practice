/*Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    int countEven(int num) {
        int sum=0,count=0;
     for(int i=1;i<=num;i++){
         int number=i;
         while(number<=0){   
             sum=sum+number%10;  
             number=number/10;    
         }
         if(sum%2==0){
             count++;
         }
         sum=0;
     }
        return count;
    }
};