/*Alice has n candies, where the ith candy is of type candyType[i]. Alice noticed that she started to gain weight, so she visited a doctor.

The doctor advised Alice to only eat n / 2 of the candies she has (n is always even). Alice likes her candies very much, and she wants to eat the maximum number of different types of candies while still following the doctor's advice.

Given the integer array candyType of length n, return the maximum number of different types of candies she can eat if she only eats n / 2 of them.*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int,int>mp1;
        int maxx=INT_MIN;
        int size=candyType.size()/2;
        // cout<<"size= "<<size<<endl;/
      for(int i=0;i<candyType.size();i++)
        {
            mp1[candyType[i]]++;
            // cout<<"mp1[i]= "<<mp1[candyType[i]]<<" "<<endl;
            
        }
       // cout<<"mp1.size= "<<mp1.size();
       if(mp1.size()>size){
           return size;
       }
        return mp1.size();
    }
};