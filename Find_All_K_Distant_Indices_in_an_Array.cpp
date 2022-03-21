/*You are given a 0-indexed integer array nums and two integers key and k. A k-distant index is an index i of nums for which there exists at least one index j such that |i - j| <= k and nums[j] == key.

Return a list of all k-distant indices sorted in increasing order.

 */

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int>v;
        int count=0;
         for(int i=0;i<nums.size();i++){
           for(int j=0;j<nums.size();j++){
               if(abs(i-j)<=k && nums[j]==key){
                  v.push_back(i);
                  
                   break;
               }
           }
        
        }
        return v;
    }
};