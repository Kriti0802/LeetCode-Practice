/*Given two strings s and t, return true if t is*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        if(s==t){
            return true;
        }
        return false;
    }
};
