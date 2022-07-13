/*Given an integer array nums, find a contiguous non-empty subarray within the array that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

A subarray is a contiguous subsequence of the array.
*/


#include <bits\stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currprod=1;
        int maxprod=INT_MIN;
        
        for(int i=0;i<nums.size();i++)
        {
            currprod*=nums[i];
            cout<<"curprod= "<<currprod<<endl;
           
            maxprod=max(maxprod,currprod);
            if(currprod==0)
        {
            currprod=1;
        }
        }
        currprod=1;
        //[3 , -1 , 4]  this array can't give result if we just pass from front so we have to check from back also
         for(int i=nums.size()-1;i>=0;i--)
        {
            currprod*=nums[i];
            cout<<"curprod= "<<currprod<<endl;
           
            maxprod=max(maxprod,currprod);
            if(currprod==0)
        {
            currprod=1;
        }
        }
        return maxprod;
    }
};