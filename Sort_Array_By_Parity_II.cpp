/*Given an array of integers nums, half of the integers in nums are odd, and the other half are even.

Sort the array so that whenever nums[i] is odd, i is odd, and whenever nums[i] is even, i is even.

Return any answer array that satisfies this condition.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>a;
        vector<int>b;
        vector<int>ans;
        
        for(int i=0;i<nums.size();i++){
         if(nums[i]%2==0){
             
             a.push_back(nums[i]);
       
             
         }
              if(nums[i]%2!=0){
             
             b.push_back(nums[i]);
         
             
         }
             
        }
        for(int i=0;i<nums.size()/2;i++){
             ans.push_back(a[i]);
            ans.push_back(b[i]);
        }
    
        return ans;
    }
    
};
    
     