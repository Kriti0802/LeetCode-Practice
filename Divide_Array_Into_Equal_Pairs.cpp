/*You are given an integer array nums consisting of 2 * n integers.

You need to divide nums into n pairs such that:

Each element belongs to exactly one pair.
The elements present in a pair are equal.
Return true if nums can be divided into n pairs, otherwise return false.

 */
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       int n=nums.size()/2;
        int count=0;
        for(int i=0;i<2*n;i+=2){
            if(nums[i]==nums[i+1])
                count++;
        }
        if(count==n){
            return true;
        }
        return false;
    }
};