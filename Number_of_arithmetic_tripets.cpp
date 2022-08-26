/*You are given a 0-indexed, strictly increasing integer array nums and a positive integer diff. A triplet (i, j, k) is an arithmetic triplet if the following conditions are met:

i < j < k,
nums[j] - nums[i] == diff, and
nums[k] - nums[j] == diff.
Return the number of unique arithmetic triplets.*/


#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int count=0;
        unordered_map<int,int>mp1;
        for(int i=0;i<nums.size();i++)
        {
            mp1[nums[i]]++;
            // cout<<"mp1[i]= "<<mp1[nums[i]]<<" "<<endl;
        }
        for( auto i:mp1)
        {
            for(auto j:mp1)
            {
                for(auto k:mp1)
                {
                    if((diff+i.first ==j.first) && (j.first + diff==k.first))
                       {
                           count++;
                       }
                }
            }
        }
        return count;
    }
};