/*You are given an integer array nums where the largest integer is unique.

Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxindex=-1;
        int max=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                maxindex=i;
                    cout<<"max= "<<max<<endl;
            }
        
        }
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]!=max && 2*nums[i]>max)
             {
                  return -1;
             }
        }
     
        return maxindex;
    }
};