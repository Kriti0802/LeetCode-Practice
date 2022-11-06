/*Given an integer array nums that does not contain any zeros, find the largest positive integer k such that -k also exists in the array.

Return the positive integer k. If there is no such integer, return -1.*/

#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxx=-1;
       
        unordered_map<int,int>mp,mp1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                 mp[nums[i]]++; 
            }
         // cout<<"mp= "<<mp[nums[i]]<<" "<<endl;
        }
         for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                 mp1[nums[i]]++; 
            }
               // cout<<"mp1= "<<mp[nums[i]]<<" "<<endl;
        }
      
      for(auto it:mp)
      {
          for(auto it1:mp1)
          {
              if(it1.first==(-it.first))
              {
                  maxx=max(it1.first,maxx);
              }
          }
      }
        return maxx;
    }
    
};