/*You are given a string number representing a positive integer and a character digit.

Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.*/


#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    string removeDigit(string number, char digit) {
        string str="";
        string max="";
        int num=0;
        for(int i=0;i<number.length();i++)
        {
            if(number[i]==digit)
            {
              
                str=number.substr(0,i)+number.substr(i+1,number.length()-1);
                cout<<"str= "<<str<<endl;
            }
           if(str>max)
            {
                max=str;
                cout<<"max= "<<max<<endl;
            }
        }
         
        return max;
        
    }
};