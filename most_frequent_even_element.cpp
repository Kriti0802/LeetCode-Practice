/*Given an integer array nums, return the most frequent even element.

If there is a tie, return the smallest one. If there is no such element, return -1.*/



#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;
class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mp;
        int minn=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                 mp[nums[i]]++;
            // cout<<"mp= "<<mp[nums[i]]<<" "<<endl;
            }
           
        }
       int count=0;
        int ans=-1;
        for(auto it:mp)
        {
            if(it.second>count)
            {
                count=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};