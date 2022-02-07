/*Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character
in the array that is larger than target.*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       
        for(int i=0;i<letters.size();i++){
            
          if(letters[i]>target)
             return letters[i];
        }
         return letters[0];
    }
};