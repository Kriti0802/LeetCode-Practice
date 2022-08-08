/*The power of the string is the maximum length of a non-empty substring that contains only one unique character.

Given a string s, return the power of s.*/

#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maxPower(string s) {
        int count=1;
          int ans=INT_MIN;
        if(s.length()==1)
        {
            return 1;
        }
         if(s.length()==2)
        {
            return 2;
        }
        for(int i=1;i<s.length()-1;i++)
        {
            
                if(s[i]==s[i+1])
                {
                    count++;
                }
            else{
                count=1;
            }
            
        ans=max(ans,count);
            
          
        }
      
        
         return ans;
    }
};