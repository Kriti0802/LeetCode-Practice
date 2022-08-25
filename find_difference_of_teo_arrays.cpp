/*Given two 0-indexed integer arrays nums1 and nums2, return a list answer of size 2 where:

answer[0] is a list of all distinct integers in nums1 which are not present in nums2.
answer[1] is a list of all distinct integers in nums2 which are not present in nums1.
Note that the integers in the lists may be returned in any order.*/
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;
class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
            map<int, int> mp, mp1;
       set<int>s1;
        set<int>s2;
  
  
    for (int i = 0; i < nums1.size(); i++)
    {
        mp[nums1[i]]++;
        cout << "mp1= " << mp[nums1[i]] << " " << endl;
    }
    for (int i = 0; i < nums2.size(); i++)

    {
        mp1[nums2[i]]++;
        cout << "mp2= " << mp1[nums2[i]] << " " << endl;
    }
    for (int i = 0; i < nums1.size(); i++)
    {
        if(mp1.find(nums1[i])==mp1.end())
        {
             s1.insert(nums1[i]);
        }
        
    }
    for (int i = 0; i < nums2.size(); i++)
    {
        if(mp.find(nums2[i])==mp.end())
        {
            s2.insert(nums2[i]);
        }
    }

    vector<vector<int>> x;
     vector<int> ans1(s1.begin(),s1.end());
     x.push_back(ans1);
       vector<int> ans2(s2.begin(),s2.end());
   x.push_back(ans2);
        return x;
    }

};