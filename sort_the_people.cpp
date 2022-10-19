/*You are given an array of strings names, and an array heights that consists of distinct positive integers. Both arrays are of length n.

For each index i, names[i] and heights[i] denote the name and height of the ith person.

Return names sorted in descending order by the people's heights.*/
#include <bits/stdc++.h>
#include <unordered_map>
#include <map>
using namespace std;
class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
               vector<string> ans;
         unordered_map<int,int>mp2;
        for(int i=0;i<heights.size();i++)
        {
            mp2[heights[i]]=i;
        }
            sort(heights.begin(),heights.end());
       for(int i=0;i<names.size();i++)
       {
           ans.push_back(names[mp2[heights[i]]]);
       }
        
    reverse(ans.begin(),ans.end());
        return ans;
    }
};