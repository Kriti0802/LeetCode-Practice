/*A sentence is a string of single-space separated words where each word consists only of lowercase letters.

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.*/

#include<bits\stdc++.h>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>mp;
       vector<string>v;
        s1+=' ';
        s2+=' ';
        string str="";
        for(int i=0;i<s1.length();i++)
        {
          if(s1[i]==' ')
          {
              ++mp[str];
              str.clear();
              
          }
            else{
                str+=s1[i];
            }
        }
        for(int i=0;i<s2.length();i++)
        {
            if(s2[i]==' ')
            {
            ++mp[str];
                str.clear();
            }
            else
            {
                str+=s2[i];
            }
        }
        for(auto iterator =mp.begin();iterator!=mp.end();iterator++)
        {
            if(iterator->second==1)
            {
                v.push_back(iterator->first);
            }
        }
        return v;
        
    }
};