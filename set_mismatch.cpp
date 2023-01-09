/*You have a set of integers s, which originally contains all the numbers from 1 to n. Unfortunately, due to some error, one of the numbers in s got duplicated to another number in the set, which results in repetition of one number and loss of another number.

You are given an integer array nums representing the data status of this set after the error.

Find the number that occurs twice and the number that is missing and return them in the form of an array.*/

#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
       int n=nums.size();
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            if(it.second>1)
            {
                ans.push_back(it.first);
                // ans.push_back(it.first+1);
            }
            
        }
          for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0)
            {
                ans.push_back(i);
            }
        }

  
        return ans;
    }
};