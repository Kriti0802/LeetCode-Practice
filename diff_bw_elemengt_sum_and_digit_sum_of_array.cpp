#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       int num=0;
        int diff=0,digsum=0,elesum=0;
          vector<int>arr;
        for(int i=0;i<nums.size();i++)
        {
           num=nums[i];
           while(num>0)
        {
            int last=num%10;
            arr.push_back(last);
            num/=10;
        }
        }
        for(int i=0;i<arr.size();i++)
        {
              cout<<"arr= "<<arr[i]<<" ";
        }
        for(int i=0;i<nums.size();i++)
        {
            digsum+=nums[i];
        }
             cout<<"digsum= "<<digsum<<endl;
        for(int i=0;i<arr.size();i++)
        {
            elesum+=arr[i];
        }
        cout<<"elesum= "<<elesum<<endl;
        diff=abs(digsum-elesum);
        return diff;
    }
};