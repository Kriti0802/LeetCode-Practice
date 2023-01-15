/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxx=INT_MIN;
       
        for(int i=0;i<accounts.size();i++)
        {
                   int sum=0;
            for(int j=0;j<accounts[0].size();j++)
            {
                cout<<"i= "<<i<<"j= "<<j<<endl;
                   sum+=accounts[i][j];
            }
            maxx=max(maxx,sum);
        }
        return maxx;
    }
};