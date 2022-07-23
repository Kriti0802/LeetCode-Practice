
/*Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2. Elements that do not appear in arr2 should be placed at the end of arr1 in ascending order.*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
         vector<int>v;
        int num[10000]={0};
        for(int i=0;i<arr1.size();i++)
        {
            ++num[arr1[i]];
            // cout<<"arr1[i]= "<<num[arr1[i]]<<" ";
        }
        for(int i=0;i<arr2.size();i++)
        {
            while(num[arr2[i]]!=0)
            {
               v.push_back(arr2[i]);
                --num[arr2[i]];
            }
        }
       
        for(int i=0;i<10000;i++)
        {
            while(num[i]!=0)
            {
                cout<<"num[i]= "<<num[i]<<" ";
                v.push_back(i);
                
                --num[i];
            }
        }
        for(int i=0;i<v.size();i++)
        {
            cout<<"v[i]= "<<v[i]<<endl;
        }
        return v;
    }
};