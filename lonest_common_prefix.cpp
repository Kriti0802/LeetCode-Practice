/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".*/

#include<bits\stdc++.h>
using namespace std;class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          string str;
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[strs.size()-1];
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==b[i])
            {
               str+=a[i];
            }
            else{
                break;
            }
        }
        return str;
        
    }
};  