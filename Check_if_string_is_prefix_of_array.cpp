/*Given a string s and an array of strings words, determine whether s is a prefix string of words.

A string s is a prefix string of words if s can be made by concatenating the first k strings in words for some positive k no larger than words.length.

Return true if s is a prefix string of words, or false otherwise.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
      string str="";
   for(int i=0;i<words.size();i++){
        str=str+words[i];
       if(s==str)
           return true;
   }
        return false;
        
    }
};
