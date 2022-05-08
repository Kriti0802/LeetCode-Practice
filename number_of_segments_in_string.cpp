/*Given a string s, return the number of segments in the string.

A segment is defined to be a contiguous sequence of non-space characters.*/
#include<bits\stdc++.h>
#include<vector>
using namespace std;



class Solution {
public:
    int countSegments(string s) {
        int count=0;
            int space=1;
        string str="";
        for(int i=0;i<s.length();i++)
        {
           if(s[i]==' ')
           {
               space=1;
               cout<<"space= "<<space<<endl;
           }
      if(space==1 && s[i]!=' ')
        {
            count++;
          cout<<"count= "<<count<<endl;
            space=0;
            
        }

           }

        return count;
    }
};