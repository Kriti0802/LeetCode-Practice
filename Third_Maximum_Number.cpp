/*Given an integer array nums, return the third distinct maximum number in this array. 
If the third maximum does not exist, return the maximum number.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
          int max=nums.back();
        int count=1;
        for(int i = nums.size()-2;i>=0;i--){
            if(nums[i]<max){
                   count++;
                max=nums[i];
            }
            if(count==3)
                break;
            
         
        }
       if(count<3){
		  
            return nums.back();
        }
        else{
            return max;}
    }
};