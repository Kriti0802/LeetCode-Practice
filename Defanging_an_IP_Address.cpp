/*Given a valid (IPv4) IP address, return a defanged version of that IP address.

A defanged IP address replaces every period "." with "[.]".*/

#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(int i=0;i<address.length();i++){
            if(address[i]=='.'){
                ans.push_back('[');
                  ans.push_back('.');
                  ans.push_back(']');
            }
            else{
                ans.push_back(address[i]);
            }
        }
        return ans;
    }
};