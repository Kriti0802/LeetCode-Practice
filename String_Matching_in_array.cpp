/*Given an array of string words. Return all strings in words which is substring of another word in any order. 

String words[i] is substring of words[j], if can be obtained removing some characters to left and/or right side of words[j]*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string>v;
        for(int i=0;i<words.size();i++){
                for(int j=0;j<words.size();j++){
                    if(words[i]!=words[j]&& words[j].find(words[i])!=-1){
                    v.push_back(words[i]);
                    break;
                }
                }
        }
        return v;

        
    }
};


