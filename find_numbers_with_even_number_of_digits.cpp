/*Given an array nums of integers, return how many of them contain an even number of digits.*/
#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;int final=0;
        int ans=0;int res=0;
        for(int i=0;i<nums.size();i++)
        {
            final=nums[i];
         
       while(final!=0)
        {
            final/=10;;
           
            count++;
     
            ans=count;
              
        }
            count=0;
     if(ans%2==0)
      {
          res++;
      
      }
        
        }
        return res;
    }
};