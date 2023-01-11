/*Given an m x n matrix of distinct numbers, return all lucky numbers in the matrix in any order.

A lucky number is an element of the matrix such that it is the minimum element in its row and maximum in its column.

 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> luckyNumbers(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int maxx = INT_MIN;
        int minn = INT_MAX;
        vector<int> row(matrix.size(), 0);
        vector<int> col(matrix[0].size(), 0);
        for (int i = 0; i < matrix.size(); i++)
        {
            minn = matrix[i][0];
            for (int j = 1; j < matrix[0].size(); j++)
            {
                minn = min(minn, matrix[i][j]);
            }
            row[i] = minn;
        }
        for (int j = 0; j < matrix[0].size(); j++)
        {
            maxx = matrix[0][j];
            for (int i = 1; i < matrix.size(); i++)
            {
                maxx = max(maxx, matrix[i][j]);
            }
            col[j] = maxx;
        }
        cout << "min= " << minn << endl;
        cout << "man= " << maxx << endl;
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (row[i] == col[j])
                {
                    ans.push_back(row[i]);
                }
            }
        }
        return ans;
    }
};