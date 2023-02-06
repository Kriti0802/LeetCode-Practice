#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
           vector<string>v;
        int n=s.length();
        string str="";
//        k=3
        if(n%k!=0)
        {
             while(n%k != 0){
                s += fill;
                n++;
            }
        }
            
                for(int i=0;i<s.size();i+=k)
                {
                   v.push_back(s.substr(i,k));
                }
                
            
        
        for(int i=0;i<v.size();i++)
        {
            cout<<"v[i]= "<<v[i]<<" "<<endl;
        }
        
        return v;
    }
};