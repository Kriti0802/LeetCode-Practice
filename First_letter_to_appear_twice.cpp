/*Given a string s consisting of lowercase English letters, return the first letter to appear twice.

Note:

A letter a appears twice before another letter b if the second occurrence of a is before the second occurrence of b.
s will contain at least one letter that appears twice.*/


#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    char repeatedCharacter(string s) {
        char str;
        int arr[26]={0};
        for(int i=0;i<s.length();i++)
        {
            ++arr[s[i]-'a']; 
            
        if(arr[s[i]-'a']>1) //s[i] = s or 118 - 95 <=  0 
        {
            return s[i];
        } 
        }
        return str;
    }
};