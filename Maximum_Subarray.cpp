/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN,currsum=0;
        
        for(int i=0;i<nums.size();i++){
              currsum=currsum+nums[i];
            if(currsum>maxsum){
                maxsum=currsum;
          }
            if(currsum<0){
                currsum=0;
            }
        }
        return maxsum;
    }
};