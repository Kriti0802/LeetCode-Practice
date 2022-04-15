/*You are given an array of strings words and a string pref.

Return the number of strings in words that contain pref as a prefix.

A prefix of a string s is any leading contiguous substring of s.*/

#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
        
            if(words[i].find(pref)==0)
            {
                cout<<"word ="<<words[i]<<endl;
                count++;
               
            }
         
        }
        return count;
    }
};