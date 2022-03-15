/*You are given a 0-indexed integer array nums. You are also given an integer key, which is present in nums.

For every unique integer target in nums, count the number of times target immediately follows an occurrence of key in nums. In other words, count the number of indices i such that:

0 <= i <= n - 2,
nums[i] == key and,
nums[i + 1] == target.
Return the target with the maximum count. The test cases will be generated such that the target with maximum count is unique.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        
        int max=INT_MIN;
        int target=0;
        for(int i=0;i<nums.size();i++){
             int count=0;
            for(int j=0;j<nums.size()-1;j++){
            if(nums[j]==key && nums[j+1]==nums[i]){
                count++;
            }
            }
            if(count>max){
                max=count;
                target=nums[i];
            }
        }
        return target;
    }
};


