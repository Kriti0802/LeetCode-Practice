/*You are given an alphanumeric string s. (Alphanumeric string is a string consisting of lowercase English letters and digits).

You have to find a permutation of the string where no letter is followed by another letter and no digit is followed by another digit. That is, no two adjacent characters have the same type.

Return the reformatted string or return an empty string if it is impossible to reformat the string.*/


#include <bits\stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string reformat(string s) {
        string str1="";
        string str2="";
        string ans="";
        int cntnum=0;
        int cntalpha=0;
        int diff=0;
        for(int i=0;i<s.length();i++)
        {
             if(s[i]>='a' && s[i]<='z')
            {
                cntalpha++; 
                 cout<<"alpha= "<<cntalpha<<endl;
             }
            else{
                cntnum++;
                 
            }
        }
          cout<<"num= "<<cntnum<<endl;
        diff=cntalpha-cntnum;
        cout<<"diff= "<<diff<<endl;
        
        for(int i=0;i<s.length();i++)
        {
            if(diff<=1)
            {
                 if(s[i]>='a' && s[i]<='z')
            {
                  str1+=s[i];
                cout<<"str1= "<<str1<<endl;
            }
        
            else{
                str2+=s[i];
                cout<<"str2= "<<str2<<endl;
            }
           
            }
           
        }
      if(cntalpha==cntnum)
      {
          for(int i=0;i<str2.length();i++)
          {
              ans+=str1[i];
              ans+=str2[i];
              cout<<"ans= "<<ans<<endl;
          }
        
      }
        else if(cntalpha==cntnum+1)
      {
          for(int i=0;i<str2.length();i++)
          {
            ans+=str1[i];
              ans+=str2[i];
              cout<<"ans= "<<ans<<endl;
          }
      ans+=str1[str1.size()-1];
      }
      
       else if(cntalpha+1==cntnum)
      {
          for(int i=0;i<str1.length();i++)
          {
               ans+=str2[i];
               ans+=str1[i];
             
              cout<<"ans= "<<ans<<endl;
          }
           ans+=str2[str2.size()-1];
      }
         
        return ans;
    }
};

