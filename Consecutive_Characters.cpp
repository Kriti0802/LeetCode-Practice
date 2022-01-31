// The power of the string is the maximum length of a non-empty substring that contains only one unique character.

// Given a string s, return the power of s.


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int  max=1;
      int count=1;
        
        for(int i=0;i<s.length();i++){
                if(s[i]==s[i+1])
                    count++;
            else
                count=1;
            if(count>max)
                max=count;
                          
        }
        return max;
    }
        
    
};