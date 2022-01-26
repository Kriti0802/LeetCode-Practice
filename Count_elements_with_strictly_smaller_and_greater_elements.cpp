/*Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    int countElements(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        if(n==0)
            return 0;
        for(int i=0;i<n-1;i++){
            sort(nums.begin(),nums.end());
         if(nums[i]!=nums[0]&&nums[i]!=nums[n-1]){
             count++;
         }  
          }
        
    return count;
    }
};
