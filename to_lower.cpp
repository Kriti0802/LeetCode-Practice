// Given a string s, return the string after replacing every uppercase letter with the same lowercase letter.




#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    string toLowerCase(string s) {
        string str="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                s[i]+=32;
               
            }
        }
        return s;
    }
};