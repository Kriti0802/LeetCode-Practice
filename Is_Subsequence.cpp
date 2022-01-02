/*Given two strings s and t, return true if s is a subsequence of t, or false otherwise.*/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        while (i < s.length() && j < t.length())
        {
            if (s[i] == t[j])
                i++;
            j++;
        }
        return i == s.length();
    }
};