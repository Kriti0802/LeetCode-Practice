/*You are given a positive integer num consisting only of digits 6 and 9.

Return the maximum number you can get by changing at most one digit (6 becomes 9, and 9 becomes 6).*/


#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int maximum69Number (int num) {
      vector<int>v;

        int last=0;
        int final=0;   
        while(num>0)
        {
            last=num%10;
            num=num/10;
          v.push_back(last);
        }
        reverse(v.begin(),v.end());
        
      for(int i=0;i<v.size();i++)
      {
          if(v[i]==6)
          {
              v[i]=9;
              break;
          }
      }
        for(int i=0;i<v.size();i++)
        {
            final=final*10+v[i];   //vector to integer
            
        }
          
        return final;
    }
};