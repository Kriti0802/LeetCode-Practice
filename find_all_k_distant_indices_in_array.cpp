
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
         vector<int>v;
        set<int>s;
        for(int i=0;i<nums.size();i++)
        {
          for(int j=0;j<nums.size();j++)
          {
              // cout<<"i= "<<i<<"j= "<<j<<endl;
              if((abs(i-j)<=k) && (nums[j]==key))
              {
                  
                  // cout<<"i= "<<i<<endl;
                  // v.push_back(i); 
                  
                  s.insert(i);
             
              }
          }
        }
        v.insert(v.end(), s.begin(), s.end());
        return v;
    }
};