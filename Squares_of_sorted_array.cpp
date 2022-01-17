/*Given an integer array nums sorted in non-decreasing order,
 return an array of the squares of each number sorted in non-decreasing order.*/

 
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]*nums[i];   
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
    
};