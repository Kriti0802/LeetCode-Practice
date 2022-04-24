/*Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.*/


#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>v;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];   
             v.push_back(sum);
        }
      
        
        return v;
    }
};