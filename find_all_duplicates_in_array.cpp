/*Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears once or twice, return an array of all the integers that appears twice.

You must write an algorithm that runs in O(n) time and uses only constant extra space.*/
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
          vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
             mp[nums[i]]++;
            // cout<<"m[i]= "<<mp[nums[i]]<<" "<<endl;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};