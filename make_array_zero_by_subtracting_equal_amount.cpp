/*You are given a non-negative integer array nums. In one operation, you must:

Choose a positive integer x such that x is less than or equal to the smallest non-zero element in nums.
Subtract x from every positive element in nums.
Return the minimum number of operations to make every element in nums equal to 0*/

#include <bits\stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                  s.insert(nums[i]);
            }
          
        }
        return s.size();
    }
};