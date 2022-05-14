/*Given a string s, return the length of the longest substring between two equal characters, excluding the two characters. If there is no such substring return -1.

A substring is a contiguous sequence of characters within a string.

 */
#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int res=-1,diff=-1;
        for(int i=0;i<s.length()-1;i++)
        {
            
               // Search for repetition of S[i]
            for(int j=s.length();j>i;j--)
            {
                // If repetition occurs
                if(s[i]==s[j])
                {
                     // Store the length of
                // the substring
                    diff=j-i-1;
                    cout<<"diff= "<<diff<<endl;
                    res=max(diff,res);
                    cout<<"res= "<<res<<endl;
                }
            }
        }
        return res;
    }
};