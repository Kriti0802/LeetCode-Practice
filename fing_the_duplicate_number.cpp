/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

 */
#include <bits/stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            
           
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                count=it.first;
            }
        }
        return count;
    }
};