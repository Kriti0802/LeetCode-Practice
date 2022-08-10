/*Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.
*/


#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        unordered_map<int,int>mp1,mp2;
        
        for(int i=0;i<nums1.size();i++)
        {
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            mp2[nums2[i]]++;
        }
        for(auto it:mp1)
        {
            for(auto it1:mp2)
            {
                if(it.first==it1.first )
            {
                v.push_back(it.first);
                 
            }
            }
            
        }
        return v;
    }
};