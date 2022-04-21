/*Given an integer array sorted in non-decreasing order, there is exactly one integer in the array that occurs more than 25% of the time, return that integer.*/

#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int count=0;
        int ans=0;
        int nums[10000000]={0};
        for(int i=0;i<arr.size();i++)
        {
            ++nums[arr[i]];
            cout<<nums[arr[i]]<<" ";
        }
        for(int i=0;i<10000000;i++)
        {
            if(nums[i]>count)
            {
                count=nums[i];
                cout<<count<<endl;
               ans=count;
                ans=i;
            }
        }
        return ans;
    }
};