/*You are given a 0-indexed array of positive integers nums. Find the number of triplets (i, j, k) that meet the following conditions:

0 <= i < j < k < nums.length
nums[i], nums[j], and nums[k] are pairwise distinct.
In other words, nums[i] != nums[j], nums[i] != nums[k], and nums[j] != nums[k].
Return the number of triplets that meet the conditions.*/

#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int count=0;
        
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(i<j<k<nums.size())
                    {
                     if( nums[i]!=nums[j] && nums[i]!=nums[k] && nums[j]!=nums[k])
                    {
                        count++;
                    }
                    }
                   
                }
            }
        }
        return count;
    }
};