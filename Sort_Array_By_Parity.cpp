/*Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         vector<int>a; //even
        vector<int>b;  //odd
        
        for(int i=0;i<nums.size();i++){
             if(nums[i]%2==0){
              a.push_back(nums[i]);
             }
            else
            b.push_back(nums[i]);
          }   
            a.insert(a.end(),b.begin(),b.end());
                    
    return a;
       

    }
};


