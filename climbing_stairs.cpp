/*You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {

        if(n<0)
        
           return 0;
        
        if(n==0 )
        
            return 1;
        

        return climbStairs(n-1)+climbStairs(n-2);

    }
};