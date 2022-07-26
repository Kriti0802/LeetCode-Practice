/*You are given a string s and an integer array indices of the same length. The string s will be shuffled such that the character at the ith position moves to indices[i] in the shuffled string.

Return the shuffled string.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
      string str="";
        vector<char>t(s.length());
        for(int i=0;i<s.length();i++)
        {
            t[indices[i]]=s[i];
            // cout<<"t[i]= "<<t[i]<<endl;
            // cout<<"indices[i]= "<<indices[i]<<endl;cout<<"s[i]= "<<s[i]<<endl;
            
        }
       for(int i=0;i<t.size();i++)
       {
           str+=t[i];
       }
        cout<<"str= "<<str<<endl;
        return str;
    }
};