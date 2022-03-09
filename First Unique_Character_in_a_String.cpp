/*Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int firstUniqChar(string s) {
        int count[26]={0};
       
        for(int i=0;i<s.size();i++)
                count[s[i] - 'a']++;
        
        for(int i=0;i<s.length();i++)
        if(count[s[i] - 'a'] == 1)
                return i;
        
        
        return -1;
    }
};





