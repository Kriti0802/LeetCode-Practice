/*You are given an integer array gifts denoting the number of gifts in various piles. Every second, you do the following:

Choose the pile with the maximum number of gifts.
If there is more than one pile with the maximum number of gifts, choose any.
Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts.
Return the number of gifts remaining after k seconds.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    long long pickGifts(vector<int> &gifts, int k)
    {
        long long sum = 0;
        priority_queue<int> pq;

        for (auto &it : gifts) // iterate through address
        {
            pq.push(it);
        }
        while (k--)
        {
            int num = pq.top(); // 100 push then 64
            pq.pop();           // pop 100 then 64 then 25
            num = floor(sqrt(num));
            // cout<<"num= "<<num<<endl;
            pq.push(num);
        }
        while (!pq.empty())
        {
            sum += pq.top();
            // cout<<"sum= "<<sum<<endl;
            pq.pop();
        }
        return sum;
    }
};