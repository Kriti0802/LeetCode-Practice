/*Given an integer array nums of positive integers, return the average value of all even integers that are divisible by 3.

Note that the average of n elements is the sum of the n elements divided by n and rounded down to the nearest integer.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    int averageValue(vector<int> &nums)
    {
        int count = 0;
        int avg = 0;
        int sum = 0;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] % 2 == 0 && nums[i] % 3 == 0)
            {
                ans.push_back(nums[i]);
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            cout << "ans[i]= " << ans[i] << ' ';
        }
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans.size() == 1)
            {
                return ans[i];
            }
            else
            {
                sum += ans[i];
                avg = sum / ans.size();
            }
        }

        return avg;
    }
};