/*Given an integer array arr that is guaranteed to be a mountain, 
return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int max=arr[0];
        int ans=0;
      for(int i=0;i<arr.size();i++){
        if(arr[i]>max){
            ans=i;
            max=arr[i];
        }
      }
        return ans;
       
    }
};