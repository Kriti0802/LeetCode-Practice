/*Given three integer arrays nums1, nums2, and nums3, return a distinct array containing all the values that are present in at least two out of the three arrays. You may return the values in any order.*/

#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
         vector<int>v;
        int arr1[1000]={0};
        int arr2[1000]={0};
        int arr3[1000]={0};
        for(int i=0;i<nums1.size();i++)
        {
            ++arr1[nums1[i]];
           
        }
          for(int i=0;i<nums2.size();i++)
        {
            ++arr2[nums2[i]];
            
        }
           for(int i=0;i<nums3.size();i++)
        {
            ++arr3[nums3[i]];
          
        }
       for(int i=0;i<1000;i++)
       {
           if(arr1[i] && arr2[i] || arr2[i] && arr3[i]|| arr1[i] && arr3[i])
           {
               v.push_back(i);
           }
       }
       
        
        return v;
    }
};