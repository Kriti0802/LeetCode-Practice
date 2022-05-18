
/*Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.

The digit sum of a positive integer is the sum of all its digits.*/

#include<bits\stdc++.h>
#include<vector>
using namespace std;

class Solution {
public:
    int countEven(int num) {
        int count=0;
        int last=0;
        int sum=0;
        for(int i=1;i<=num;i++)
        {
            int n=i;
       while(n>0)
       {
           last=n%10;
           sum+=last;
           n=n/10;
           cout<<"sum= "<<sum<<endl;
       }
            if(sum%2==0)
            {
                count++;
            }
             sum=0;
        }
        
       
        return count;
    }
    
};