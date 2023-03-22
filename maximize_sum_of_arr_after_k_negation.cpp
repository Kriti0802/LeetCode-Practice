#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
//elements will be sorted in increasing order, with the smallest element at the top of the queue.
      // priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
          priority_queue<int, vector<int>, greater<int>> pq;
           for(auto &it:nums)
           {
               pq.push(it);
           }
        
        while(k--)
        {
            int num=pq.top();
            pq.pop();
            pq.push(-1*num);
            
        }
        // while(!pq.empty())
        // {
        //     cout<<pq.top()<<endl;
        //     pq.pop();
        // }
        int sum=0;
        while(!pq.empty())
        {
           sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
    
};