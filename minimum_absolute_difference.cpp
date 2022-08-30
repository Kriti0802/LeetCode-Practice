/*Given an array of distinct integers arr, find all pairs of elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs), each pair [a, b] follows

a, b are from arr
a < b
b - a equals to the minimum absolute difference of any two elements in arr
 

*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
         vector<vector<int>>ans;
         vector<int>v;
        sort(arr.begin(),arr.end());
        int minn=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        {
            minn=min(minn,abs(arr[i]-arr[i+1]));
        }
        for(int i=0;i<arr.size()-1;i++)
        {
           if(abs(arr[i]-arr[i+1])==minn)
           {
           
               ans.push_back({arr[i],arr[i+1]});
           }
           
        }
        cout<<"min="<<minn<<endl;
        return ans;
    }
};