
/*A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.

Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.*/



#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int diff=0;
        sort(arr.begin(),arr.end());
        diff=arr[0]-arr[1];
        for(int i=0;i<arr.size()-1;i++)
        {
            if((arr[i]-arr[i+1])!=diff)
            {
                return false;
            }
        }
        return true;
    }
};
