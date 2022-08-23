/*You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings.

Return the maximum number of copies of target that can be formed by taking letters from s and rearranging them.

 */

#include <bits\stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<int,int>mp1,mp2;
        int count= INT_MAX;
        for(int  i=0;i<s.length();i++)
        {
            mp1[s[i]]++;
            cout<<"s[i]= "<<mp1[s[i]]<<" ";
        }
        for(int  i=0;i<target.length();i++)
        {
            mp2[target[i]]++;
            cout<<"t[i]= "<<mp2[target[i]]<<" "<<endl;
        }
     for (int i = 0; i < target.length(); i++)
    {
        count = min(count, mp1[target[i]] / mp2[target[i]]);
        cout << mp1[target[i]] / mp2[target[i]] << endl;
    }  
        return count;
    }
};