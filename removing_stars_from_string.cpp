/*You are given a string s, which contains stars *.

In one operation, you can:

Choose a star in s.
Remove the closest non-star character to its left, as well as remove the star itself.
Return the string after all stars have been removed.

Note:

The input will be generated such that the operation is always possible.
It can be shown that the resulting string will always be unique.*/


#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    string removeStars(string s) {
        string str1="";
         stack<int>str;
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]>='a' && s[i]<='z')
            {
                str.push(s[i]);
            }
            else if(s[i]=='*')
            {
                str.pop();
            }
        }
       while(!str.empty())
        {
            str1+=str.top();
            str.pop();
           
        }
        reverse(str1.begin(),str1.end());
        return str1;
    }
};