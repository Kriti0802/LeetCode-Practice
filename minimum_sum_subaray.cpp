/*Given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.*/

#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minn=INT_MAX;
        int cnt=0;
        int sum=0;
        int i=0,j=0;
      while(j<nums.size())
      {
          sum+=nums[j];
          
          if(sum<target)
          {
              j++;
          }
          if(sum>=target )
     {
        while(sum>=target)
        {
          minn=min(minn,j-i+1);
          sum-=nums[i];
          i++;
        }
        j++;
      }
    

     }
       return (minn == INT_MAX) ? 0 : minn;
    }
};