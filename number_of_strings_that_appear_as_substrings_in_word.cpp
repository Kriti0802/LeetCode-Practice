/*Given an array of strings patterns and a string word, return the number of strings in patterns that exist as a substring in word.

A substring is a contiguous sequence of characters within a string.*/

#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int count=0;
        for(int i=0;i<patterns.size();i++)
        {
            if(word.find(patterns[i])!=-1)
            {
                count++;
            }
        }
        return count;
    }
};