#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string>x;
        int i;
        sentence+=" ";
        string str="";
        for(i=0;i<sentence.length();i++)
        {
            if(sentence[i]==' ')
            {
                x.push_back(str);
                str="";
                
            }
            else
            {
            str+=sentence[i];
                 
            }
        }
        for(i=0;i<x.size();i++)
        {
            cout<<x[i]<<endl;
        }
        for(i=0;i<x.size();i++)
        {
             
            if(x[i].find(searchWord)==0)
            {
                return i+1;
                cout<<"X";
               
            }
        }
        return -1;
        
        
    }
};