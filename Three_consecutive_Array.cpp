/*Given an integer array arr, return true if 
here are three consecutive odd numbers in the array. Otherwise, return false.*/



#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]%2!=0){
                count++;
              if(count==3)
                     return true;
              }
        else
          count=0;
    }
        
        return false;
    }
};