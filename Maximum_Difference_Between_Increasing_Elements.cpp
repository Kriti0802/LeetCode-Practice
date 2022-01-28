/*Given a 0-indexed integer array nums of size n, find the maximum difference between nums[i] and nums[j]
 (i.e., nums[j] - nums[i]), such that 0 <= i < j < n and nums[i] < nums[j].
Return the maximum difference. If no such i and j exists, return -1.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max_diff=0;
        for(int i=0;i<nums.size();i++){
         for(int j=i+1;j<nums.size();j++){
           if(nums[i]<nums[j]&& i<j){
           max_diff=max((nums[j]-nums[i]),max_diff);
            
           }
         }
        }
            if(max_diff==0)
                return -1;
            return max_diff;          
    }
};