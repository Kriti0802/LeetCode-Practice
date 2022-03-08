/*A fancy string is a string where no three consecutive characters are equal.

Given a string s, delete the minimum possible number of characters from s to make it fancy.

Return the final string after the deletion. It can be shown that the answer will always be unique.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    string makeFancyString(string s) {
     string ans;
        for(int i=0;i<s.size();i++){
            if(!(s[i]==s[i+1] && s[i+1]==s[i+2]))
                ans+=s[i];
        }
        return ans;
    }
};