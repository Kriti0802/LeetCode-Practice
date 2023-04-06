#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
      bool isvowel(char c)
         {
             if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
                {
                    return true;
                }
             return false;
         }
    int vowelStrings(vector<string>& words, int left, int right) {
        int cnt=0;
        
        for(int i=left;i<=right;i++)
        {
          if( isvowel(words[i][0]) && isvowel(words[i].back()) )
          {
              cnt++;
          }

        }
        return cnt;
    }
};