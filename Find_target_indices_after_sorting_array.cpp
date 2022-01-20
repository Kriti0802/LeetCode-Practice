/*ou are given a 0-indexed integer array nums and a target element target.

A target index is an index i such that nums[i] == target.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>num;
     sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
                   if(nums[i]==target){
                       num.push_back(i);
                       }
                
        }
        return num;
       
        
    }
};