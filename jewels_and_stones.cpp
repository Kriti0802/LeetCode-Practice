/*You're given strings jewels representing the types of stones that are jewels, and stones 
\representing the stones you have. Each character in stones is a type of stone you have. 
You want to know how many of the stones you have are also jewels.

Letters are case sensitive, so "a" is considered a different type of stone from "A".*/


#include <bits\stdc++.h>
#include <vector>
using namespace std;class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>mp1;
        int count=0;
        for(int i=0;i<jewels.length();i++)
        {
            mp1[jewels[i]]++;
            cout<< "mp1= "<<mp1[jewels[i]]<<" "<<endl;
        }
        for(int i=0;i<stones.length();i++)
        {
           if(mp1[stones[i]]>0)
           {
               // cout<< "mp2= "<<mp1[stones[i]]<<" "<<endl;
               count++;
           }
        }
       
          
        return count;
    }
};