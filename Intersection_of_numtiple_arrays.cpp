/*Given a 2D integer array nums where nums[i] is a non-empty array of distinct positive integers, return the list of integers that are present in each array of nums sorted in ascending order.
 */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
         unordered_map<int, int > mp;
         vector<int>v;
        int arr[100000]={0};
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums[i].size();j++)
            {
                   mp[nums[i][j]] ++;
                // cout<<"mp= "<<mp[nums[i][j]]<<" "<<endl;
            }
        }
        cout<<"nums.size= "<<nums.size()<<endl;
      for(auto it:mp)
      {
          if(it.second==nums.size())
          {
              v.push_back(it.first);
          }
      }
        sort(v.begin(),v.end());
        return v;
    }
};