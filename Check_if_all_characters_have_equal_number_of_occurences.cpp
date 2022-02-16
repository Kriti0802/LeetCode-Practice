/*Given a string s, return true if s is a good string, or false otherwise.

A string s is good if all the characters that appear in s have the same number of occurrences (i.e., the same frequency).

*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int freq=0;
        int count=0;
      int  n=s.length();
      for(int i=0;i<1;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==s[j])
                    count++;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==s[j])
                    freq++;
                
            }
            if(freq!=count)
                return false;
            freq=0;
        }
        return true;
        
    }
};

