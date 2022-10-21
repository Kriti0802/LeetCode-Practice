/*Given an array arr of integers, check if there exist two indices i and j such that :

i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]*/
#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(i!=j && arr[i]==2*arr[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};