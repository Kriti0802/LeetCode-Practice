/*Given an integer array nums and an integer k, return the number of pairs (i, j) 
where i < j such that |nums[i] - nums[j]| == k.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
               if( (abs(nums[i]-nums[j])==k))
                
                   count++;
            }
        }
        return count;
      
    } 
};
