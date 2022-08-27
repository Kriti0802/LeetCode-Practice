/*You are given a 0-indexed integer array nums. In one operation, you may do the following:

Choose two integers in nums that are equal.
Remove both integers from nums, forming a pair.
The operation is done on nums as many times as possible.

Return a 0-indexed integer array answer of size 2 where answer[0] is the number of pairs that are formed and answer[1] is the number of leftover integers in nums after doing the operation as many times as possible.*/


#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
          vector<int>ans;
        int count1=0;
          int count2=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
            // cout<<"mp[i]= "<<mp[nums[i]]<<" "<<endl;
            
        }
        for(auto it:mp)
        {
                count1=count1+it.second/2;
                   cout<<"count1= "<<count1<<endl;
            
          if(it.second%2!=0 )
           {
                  count2++;
            cout<<"count2= "<<count2<<endl;
           }
         
        }
         ans.push_back(count1);
          ans.push_back(count2);

        return ans;
    }
};
  