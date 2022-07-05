/*Given an integer array nums sorted in non-decreasing order, return an array of the squares of 
each number sorted in non-decreasing order.*/

#include <bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>v;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
            cout<<nums[i]<<" ";
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            cout<<"nums[i]= "<<nums[i]<<" ";
            v.push_back(nums[i]);
        }
            
        return v;
    }
};