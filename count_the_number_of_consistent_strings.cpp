/*You are given a string allowed consisting of distinct characters and an array of strings words. A string is consistent if all characters in the string appear in the string allowed.

Return the number of consistent strings in the array words.*/

#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        int arr[26]={0};
        for(int i=0;i<allowed.length();i++)
        {
            ++arr[allowed[i]-'a'];
            cout<<"arr[i]= "<<arr[allowed[i]-'a']<<endl;
                  
        }
        string str;
        int checker=0;
        for(int i=0;i<words.size();i++)
        {
           str=words[i];// ad
            for(int j=0;j<str.length();j++)
            {
                if(arr[str[j]-'a']==1)
                {
                    checker++;
                    
                }
            }
            if(checker==str.length())
            {
              count++;
                
            }
            checker=0;
            
        }
       
        return count;
    }
};

