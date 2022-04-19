/*Given a string s, reverse the string according to the following rules:

All the characters that are not English letters remain in the same position.
All the English letters (lowercase or uppercase) should be reversed.
Return s after reversing it.*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str="";
        for(int i=0;i<s.length();i++)
        {
           if(s[i]>='a'&& s[i]<='z' || s[i]>='A' && s[i]<='Z' )
           {
               str+=s[i];
               cout<<"str= "<<str<<endl;
           }
         
        }
        reverse(str.begin(),str.end());
        int j=0;
        for(int i=0;i<s.length();i++)
        {
           if(s[i]>='a'&& s[i]<='z' || s[i]>='A' && s[i]<='Z' )
           {
               s[i]=str[j];
               
               cout<<"str[j]= "<<str[j]<<' ';
               j++;
            
           }
        }
        
        return s;
    }
};