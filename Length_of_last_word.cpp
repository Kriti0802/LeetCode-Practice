#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        int ans=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!=' ')
            {
                count++;
                cout<<"count = "<<count<<endl;
                ans=count;     //store the value of count
                cout<<"ans = "<<ans<<endl;
            }
            else
             count=0;
        }
       
        
        return ans;
    }
};