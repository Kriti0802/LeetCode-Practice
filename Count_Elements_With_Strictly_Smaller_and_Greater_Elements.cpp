/*Given an integer array nums, return the number of elements that have both a strictly smaller and a strictly greater element appear in nums.*/

#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        int small=nums[0];
         cout<<"nums[0]= "<<nums[0];
           cout<<"last= "<<nums[nums.size()-1]<<endl;
        for(int i=0;i<nums.size();i++)
        {
           
            if(nums[i]>small && nums[i]<nums[nums.size()-1])

            {
                count++;
                cout<<"count= "<<count<<endl;
            }
        }
        return count;
    }
};