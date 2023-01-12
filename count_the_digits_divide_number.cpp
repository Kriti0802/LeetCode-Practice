/*Given an integer num, return the number of digits in num that divide num.

An integer val divides nums if nums % val == 0*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int countDigits(int num) {
        int last=0;
         int n = num;
        int count=0;
        while(n>0)
        {
            last=n%10;
              if(num%last==0)
            {
                count++;
            }
            n=n/10;
          cout<<"last= "<<last<<endl;
            cout<<"num= "<<num<<endl;
          
        }
           
     
        return count;
    }
};