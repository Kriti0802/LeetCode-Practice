/*Given two positive integers a and b, return the number of common factors of a and b.

An integer x is a common factor of a and b if x divides both a and b.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int x=0;
        for(int i=1;i<=min(a,b);i++)
        {
          if(a%i==0 && b%i==0 )
        {
           x++;
        }
        }
     
        return x;
    }
};