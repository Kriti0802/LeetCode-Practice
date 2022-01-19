/*Given an integer array nums (0-indexed) and two integers target and start,
 find an index i such that nums[i] == target and abs(i - start) is minimized.
  Note that abs(x) is the absolute value of x.
Return abs(i - start).*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;



class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int count=0;
        
        vector<int>v;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                 count =abs(i - start);
                
                 v.push_back(count);
            }
              
        }
        sort(v.begin(),v.end());
     return v[0];
    }
};