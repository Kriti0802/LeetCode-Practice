/*You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.

 */

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=0;
        int index=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                max=nums[i];
                index=i;
            }
            
        }
        cout<<"max:"<<max<<" index:"<<index;
         for(int i=0;i<nums.size();i++){
             
             
             if(2*nums[i]>max && nums[i]!=max){
                 cout<<"nums:"<<nums[i];
                 return -1;
           
        }
         }
        return index;
    }
};