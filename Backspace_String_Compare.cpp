#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='#')
            {
                st.push(s[i]);
            }
            else if(!st.empty())
            {
                st.pop();
                
            }
        }
         stack<char>x;
        for(int i=0;i<t.length();i++)
        {
            if(t[i]!='#')
            {
                x.push(t[i]);
            }
            else if(!x.empty())
            {
                x.pop();
                
            }
        }
    
        if(x!=st)
        {
        
        return false;
        }
        return true;
        
    }


};