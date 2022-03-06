/*Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
        int sum=0;
         while(num >= 10){
            sum = 0;
        while(num>0){
            sum+=(num%10);
           num/=10;
          
             
        }
           num = sum;   
         }
        return num;
    }
};

