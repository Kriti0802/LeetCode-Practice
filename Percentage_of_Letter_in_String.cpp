/*Given a string s and a character letter, return the percentage of characters in s that equal letter rounded down to the nearest whole percent.

 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.length();
        float count=0;
       float perc=0;
        float div=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==letter)
            {
                count++;
                cout<<"count= "<<count<<endl; 
               
            }
        }
          perc=(count*100)/n;
        cout<<"perc= "<<perc<<endl;
        return perc;
    }
};