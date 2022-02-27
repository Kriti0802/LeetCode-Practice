/*Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

A string is palindromic if it reads the same forward and backward.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
         string str1=words[i];
            reverse(str1.begin(),str1.end());
            if(words[i]==str1)
                return words[i];
        }
        return "";
    }
};