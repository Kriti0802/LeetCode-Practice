/*An array nums is monotone increasing if for all i <= j, nums[i] <= nums[j].
 An array nums is monotone decreasing if for all i <= j, nums[i] >= nums[j].*/

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    bool IsmonotonicIncrease(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (!(nums[i] >= nums[i - 1]))
                return false;
        }
        return true;
    }
    bool IsmonotonicDecrease(vector<int> &nums)
    {
        for (int i = 1; i < nums.size(); i++)
        {
            if (!(nums[i] <= nums[i - 1]))
                return false;
        }
        return true;
    }

public:
    bool isMonotonic(vector<int> &nums)
    {
        return (IsmonotonicIncrease(nums) || IsmonotonicDecrease(nums));
    }
};
