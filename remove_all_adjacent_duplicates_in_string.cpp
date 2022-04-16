#include <bits/stdc++.h>
#include <vector>
using namespace std;


class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(st.empty()){
                 st.push(s[i]);
            }
          else  if(s[i]!=st.top())
          {
              st.push(s[i]);
          }
            
        else if(s[i]==st.top())
            {
                st.pop();
            }
         }
    
        string x="";
        while(!st.empty())
        {
            x+=st.top();
            st.pop();
           
        }
         reverse(x.begin(),x.end());
     return x;
    }
};