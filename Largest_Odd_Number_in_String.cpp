/*You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

A substring is a contiguous sequence of characters within a string.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string largestOddNumber(string num) {
        int max=0;
        string str="";
        for(int i=num.length();i>=0;i--){
         if((num[i]-'0')%2!=0){
             return num.substr(0, i + 1);
             
         }
          
        }
            return str;
            }
};
