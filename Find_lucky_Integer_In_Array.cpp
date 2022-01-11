/*Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.

Return the largest lucky integer in the array. If there is no lucky integer return -1.*/

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        int count = 0;
        int n = arr.size();
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                    count++;
            }
            if (count == arr[i])
                if (val < count)
                    val = count;
            count = 0;
        }
        if (val != 0)
            return val;

        return -1;
    }
};
