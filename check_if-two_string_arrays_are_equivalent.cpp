/*Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.

*/
#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string str1="";
        string str2="";
        for(int i=0;i<word1.size();i++)
        {
            str1+=word1[i];
            cout<<"str1= "<<str1<<" ";
        }
        for(int i=0;i<word2.size();i++)
        {
            str2+=word2[i];
                 cout<<"str2= "<<str2<<" ";
        }
        if(str1!=str2)
        {
            return false;
        }
        return true;
        
    }
};