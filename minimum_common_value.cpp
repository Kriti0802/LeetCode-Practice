#include <bits/stdc++.h>
#include <vector>
using namespace std;class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
     int minn=INT_MAX;
     unordered_map<int,int>mp1;

     for(int i=0;i<nums1.size();i++)
     {
        mp1[nums1[i]]=1;
     }
      for(int i=0;i<nums2.size();i++)
     {
          if(mp1.count(nums2[i])==1)
          {
              return nums2[i];
          }
        
     }


        return -1;
        
    }
};