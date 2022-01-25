/*Given a fixed-length integer array arr, duplicate each occurrence of zero, 
shifting the remaining elements to the right.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
          if(arr[i]==0){
              for(int j=arr.size()-1;j>=i+1;j--){
                  arr[j]=arr[j-1];
              }
              i++;
          }
        }
    }
};