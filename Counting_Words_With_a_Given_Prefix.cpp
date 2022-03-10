/*You are given an array of strings words and a string pref.

Return the number of strings in words that contain pref as a prefix.

A prefix of a string s is any leading contiguous substring of s.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(auto word:words){
          if(word.find(pref)==0)
              count++;
        }
        return count;
    }
};