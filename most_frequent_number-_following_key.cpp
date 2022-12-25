/*ou are given a 0-indexed integer array nums. You are also given an integer key, which is present in nums.

For every unique integer target in nums, count the number of times target immediately follows an occurrence of key in nums. In other words, count the number of indices i such that:

0 <= i <= nums.length - 2,
nums[i] == key and,
nums[i + 1] == target.
Return the target with the maximum count. The test cases will be generated such that the target with maximum count is unique.

 */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int target=0;
        int count=0;
        int max=INT_MIN;
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
                mp[nums[i+1]]++;
                cout<<"mp= "<<nums[i+1]<<' ';
            }
        }
        for(auto it:mp)
        {
            if(it.second>max)
            {
                max=it.second;
                cout<<max;
                target=it.first;
            }
        }
       
        return target;
    }
};