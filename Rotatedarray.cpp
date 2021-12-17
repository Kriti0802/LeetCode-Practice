#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
    vector<int> arr(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        arr[(i + k) % nums.size()] = nums[i];
    }
    // copy arr to num
    nums = arr;
}
