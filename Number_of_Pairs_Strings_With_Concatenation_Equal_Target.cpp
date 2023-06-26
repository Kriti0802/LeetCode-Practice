/*Given an array of digit strings nums and a digit string target, return the number of pairs of indices (i, j) (where i != j) such that the concatenation of nums[i] + nums[j] equals target.
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int cnt=0,cnt2=0;
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                cout<<"i= "<<i<<"j= "<<j<<endl;
                if(i!=j && nums[i]+nums[j]==target)
                {
                    cnt++;
                }
            }
        }
        //  for(int i=nums.size()-1;i>=0;i--)
        // {
        //     for(int j=i-1;j>=0;j--)
        //     {
        //          // cout<<"i= "<<i<<"j= "<<j<<endl;
        //         if(i!=j && nums[i]+nums[j]==target)
        //         {
        //             cnt2++;
        //         }
        //     }
        //  }
        // ans=cnt+cnt2;
        return cnt;
    }
};