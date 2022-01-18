/*Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. 
That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>v;
        int count;
        for(int i=0;i<nums.size();i++){
            count=0;
          for(int j=0;j<nums.size();j++){
               if(i!=j&&nums[j]<nums[i]){
                     count++;
               }
          }
            v.push_back(count);
        }
        return v;
    }
};
