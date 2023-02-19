/*You are given a 0-indexed integer array nums. An index i is part of a hill in nums if the closest non-equal neighbors of i are smaller than nums[i]. Similarly, an index i is part of a valley in nums if the closest non-equal neighbors of i are larger than nums[i]. Adjacent indices i and j are part of the same hill or valley if nums[i] == nums[j].

Note that for an index to be part of a hill or valley, it must have a non-equal neighbor on both the left and right of the index.

Return the number of hills and valleys in nums.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    int countHillValley(vector<int> &nums)
    {
        int cnt = 0;

        for (int i = 1, j = 0; i < nums.size() - 1; i++)
        {

            if ((nums[i] > nums[j] && nums[i] > nums[i + 1]) ||
                (nums[i] < nums[j] && nums[i] < nums[i + 1]))
            {
                cnt++;
                j = i;
                // cout << "i= " << i << "j= " << j << ' ' << endl;
            }
        }
        return cnt;
    }
};