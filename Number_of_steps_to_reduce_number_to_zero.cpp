// Given an integer num, return the number of steps to reduce it to zero.

// In one step, if the current number is even, you have to divide it by 2, otherwise, you have to subtract 1 from it.


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int step=0;
        while(num>0){
          if(num%2==0){
             num=num/2;
              step++;
          }
            else{
                num-=1;
                step++;
            }
        }
        return step;
    }
};