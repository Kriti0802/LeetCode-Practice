/*A pangram is a sentence where every letter of the English alphabet appears at least once.

Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.*/

#include<bits\stdc++.h>
#include<vector>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        int arr[120]={0};
        for(int i=0;i<sentence.length();i++)
        {
           ++arr[sentence[i]-'a'];
            cout<<arr[sentence[i]-'a']<<" ";
        }
        for(int i=0;i<26;i++)
        {
          if(arr[i]==0)
          {
              return false;
          }
        }
        return true;
    }
};