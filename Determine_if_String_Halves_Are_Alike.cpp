/*You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.

Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.

Return true if a and b are alike. Otherwise, return false.*/


#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool halvesAreAlike(string s) {
        string a="";
        string b="";
        int count=0;
        int cnt=0;
               a=s.substr(0,s.length()/2);
                // cout<<"a= "<<a<<endl;
                b=s.substr(s.length()/2,s.length());
                // cout<<"b= "<<b<<endl;
        for(int i=0;i<s.length()/2;i++)
        {
               
            if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' ||                   a[i]=='U')
            {
                count++;
                cout<<"count= "<<count;
            }
              if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u' || b[i]=='A' || b[i]=='E' || b[i]=='I' || b[i]=='O' ||                   b[i]=='U')
            {
                cnt++;
                cout<<"count1= "<<cnt<<endl;
            }
        }
        for(int i=0;i<s.length();i++)
        {
            if(count==cnt)
            {
                return true;
            }
        }
        return false;
    }
};