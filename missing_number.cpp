/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

 */
#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        // int arr[1000]={0};
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            // cout<<"mp= "<<mp[nums[i]]<<" ";
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(mp[i]==0)
            {
                cout<<"i= "<<i<<endl;
                count=i;
            }
        }
        
        return count;
    }
};