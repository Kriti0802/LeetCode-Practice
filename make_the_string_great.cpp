/*Given a string s of lower and upper case English letters.

A good string is a string which doesn't have two adjacent characters s[i] and s[i + 1] where:

0 <= i <= s.length - 2
s[i] is a lower-case letter and s[i + 1] is the same letter but in upper-case or vice-versa.
To make the string good, you can choose two adjacent characters that make the string bad and remove them. You can keep doing this until the string becomes good.

Return the string after making it good. The answer is guaranteed to be unique under the given constraints.

Notice that an empty string is also good.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        string str="";
      
        for(int i=0;i<s.length();i++)
        {
            
         if(st.empty())
         {
             st.push(s[i]);
         }
           else if(abs(s[i]-st.top()) == 32){
                    st.pop();
            }
            else{
                st.push(s[i]);
            }
            
        }
        
        while(!st.empty())
        {
            str+=st.top();
            st.pop();
        }
           reverse(str.begin(),str.end());
        return str;
    }
};