/*Given an integer n, return a string with n characters such that each character in such string occurs an 
odd number of times.*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    string generateTheString(int n) {
        string res;
        if(n%2==0){
            res="a";
            n--;
            
        }
        for(int i=0;i<n;i++){
            res+="b";
        }
        return res;
    }
};