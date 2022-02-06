/*You are given a 0-indexed integer array nums. Rearrange the values of nums according to the following rules:

Sort the values at odd indices of nums in non-increasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [4,3,2,1] after. The values at odd indices 1 and 3 are sorted in non-increasing order.
Sort the values at even indices of nums in non-decreasing order.
For example, if nums = [4,1,2,3] before this step, it becomes [2,1,4,3] after. The values at even indices 0 and 2 are sorted in non-decreasing order.
Return the array formed after rearranging the values of nums.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
     
     vector<int>a;
        vector<int>b;
        for(int i=0;i<nums.size();i++){
            if(i%2!=0){
                 a.push_back(nums[i]);
            }
            if(i%2==0){
                   b.push_back(nums[i]);
            }
        }  
            
            vector<int>result;
            sort(a.begin(),a.end(),greater<int>());   //sort in decreasing order
            sort(b.begin(),b.end());
            
            
                int x=0;
                int y=0;
                
            for (int i=0;i<nums.size();i++){
                   if(i%2!=0){
                       result.push_back(a[y]);
                       y++;
                   }
                   else{
                       result.push_back(b[x]);
                       x++;
                   }
               }
            
        
    
             return result;  
        
    }
};

 