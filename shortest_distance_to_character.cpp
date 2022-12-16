/*Given a string s and a character c that occurs in s, return an array of integers answer where answer.length == s.length and answer[i] is the distance from index i to the closest occurrence of character c in s.

The distance between two indices i and j is abs(i - j), where abs is the absolute value function.*/


#include <bits/stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>ans;
            vector<int>x;
    int i;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==c)
        {
            x.push_back(i);

        }
    }
  for(int i=0;i<x.size();i++)
  {
      cout<<"x[i]= "<<x[i]<<" ";
  }
    int diff=INT_MAX;
    for(i=0;i<s.length();i++)
    {
        for(int j=0;j<x.size();j++)
        {
            diff=min(diff,abs(x[j]-i));

        }

        ans.push_back(diff);
        diff=INT_MAX;
    }

        return ans;

    }
};