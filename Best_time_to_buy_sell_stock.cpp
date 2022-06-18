/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/

#include <bits\stdc++.h>
using namespace std;
//  7-1,7-5,7-5,7-3,7-6,7-4
// 1-5,1-3,1-6,1-4
class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int maxx=INT_MIN;
        int minn=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++)
        {
          minn=min(prices[i],minn);
         int profit=prices[i]-minn;
           maxx=max(maxx,profit);
    
        }
        return maxx;
    }
};
   