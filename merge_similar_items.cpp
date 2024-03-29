/*You are given two 2D integer arrays, items1 and items2, representing two sets of items. Each array items has the following properties:

items[i] = [valuei, weighti] where valuei represents the value and weighti represents the weight of the ith item.
The value of each item in items is unique.
Return a 2D integer array ret where ret[i] = [valuei, weighti], with weighti being the sum of weights of all items with value valuei.

Note: ret should be returned in ascending order by value.*/

#include <bits\stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
   
    // map used for inserting in sorted way

    map<int, int> mp1;

    for (int i = 0; i < items1.size(); i++)
    {
        mp1[items1[i][0]]=items1[i][1]; //mp[1]=1 mp[4]=5 mp[3]=8

       
    }
    for(int i=0;i<items2.size();i++)
    {
      mp1[items2[i][0]]+=items2[i][1];
   
       
    }
    vector<vector<int>>z;
    for(auto it:mp1)
    {
        vector<int>v;
        v.push_back(it.first);
        v.push_back(it.second);
        z.push_back(v);

        // cout<<it.first<<" "<<it.second<<endl;
    }
        return z;
        
    }
};