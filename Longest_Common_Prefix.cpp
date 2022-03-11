/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        string str=strs[0];
        for(int i=0;i<str.size();i++){
            for(int j=1;j<strs.size();j++){
              if(str[i]!=strs[j][i]){
                  return ans;
              }   
            }
              ans+=str[i];                 
        }
        return ans;
        
    }
};
