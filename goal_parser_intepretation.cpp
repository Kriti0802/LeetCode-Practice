/*You own a Goal Parser that can interpret a string command. The command consists of an alphabet of "G", "()" and/or "(al)" in some order. The Goal Parser will interpret "G" as the string "G", "()" as the string "o", and "(al)" as the string "al". The interpreted strings are then concatenated in the original order.

Given the string command, return the Goal Parser's interpretation of command.

 */
#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    string interpret(string command) {
        string str="";
   
        for(int i=0;i<command.length();i++)
        {
            if(command[i]=='G'||command[i]=='a'||command[i]=='l' )
            {
                 str+=command[i];
                 cout<<"str= "<<str<<" "<<endl;
            }
          
            else if(command[i]=='(' && command[i+1]==')')
            {
                str+='o';
                cout<<"here"<<endl;
            }
        }
        return str;
    }
};