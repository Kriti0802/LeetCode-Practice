/*Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max;
        max=INT_MIN;
        for(int i=0;i<nums.size();i++){
                   for(int j=i+1;j<nums.size();j++){
                        if(((nums[i]-1)*(nums[j]-1))>max)
                      max=(nums[i]-1)*(nums[j]-1);  
                   }
        }
        return max;
        
    }
};