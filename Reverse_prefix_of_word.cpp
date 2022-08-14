/*Given a 0-indexed string word and a character ch, reverse the segment of word that starts at index 0 and ends at the index of the first occurrence of ch (inclusive). If the character ch does not exist in word, do nothing.

For example, if word = "abcdefd" and ch = "d", then you should reverse the segment that starts at 0 and ends at 3 (inclusive). The resulting string will be "dcbaefd".
Return the resulting string.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
      string str="";
        int start=0;
        cout<<"start= "<<start<<endl;
        int index=0;
       for(int i=0;i<word.length();i++)
       {
          if(word[i]==ch)
          {
              index=i;
        
              cout<<"index= "<<index;
                
                 break; 
          }
           
          
       }
        
         while(start<=index)
             {
           swap(word[start++],word[index--]); 
              // start++;
              //  index--;
                }
        return word;
    }
};