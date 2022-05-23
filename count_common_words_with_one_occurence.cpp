/*Given two string arrays words1 and words2, return the number of strings that appear exactly once in each of the two arrays.*/


#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
           unordered_map<string, int> mp;
         int count=0;
    int i;
    for (i = 0; i < words1.size(); i++)
    {
        mp[words1[i]]++;
       
        if(mp[words1[i]]>1)
        {
        mp[words1[i]]=10000;
        }
    }
        for(i=0;i<words2.size();i++)
    {
        mp[words2[i]]+=2;   
        
    }
   for(auto iterator=mp.begin();iterator!=mp.end();iterator++)
    {
        if(iterator->second==3)
        {
            count++;
            cout<<"count= "<<count<<endl;
        }
    }
    return count;


    }
};