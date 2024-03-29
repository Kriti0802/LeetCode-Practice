/*The product difference between two pairs (a, b) and (c, d) is defined as (a * b) - (c * d).

For example, the product difference between (5, 6) and (2, 7) is (5 * 6) - (2 * 7) = 16.
Given an integer array nums, choose four distinct indices w, x, y, and z such that the product difference between pairs (nums[w], nums[x]) and (nums[y], nums[z]) is maximized.

Return the maximum such product difference.*/


#include <bits\stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
         int maxx=INT_MIN;
            int prod=0;
        sort(nums.begin(),nums.end());
         prod= abs((nums[0]*nums[1])-(nums[nums.size()-1]*nums[nums.size()-2]));
        for(int i=0;i<nums.size()-1;i++)
        {
          maxx=max(maxx,prod);
        }
        return maxx;
    }
};