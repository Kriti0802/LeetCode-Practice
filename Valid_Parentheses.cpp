/*Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.*/ 

#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s){
        stack<int>st;
  	for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            if (!st.empty())
            {
                char top = st.top();
                if ((top == '{' && ch == '}') || (top == '(' && ch == ')') || (top == '[' && ch == ']'))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    return false;
}
};