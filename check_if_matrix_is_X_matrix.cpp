/*A square matrix is said to be an X-Matrix if both of the following conditions hold:

All the elements in the diagonals of the matrix are non-zero.
All other elements are 0.
Given a 2D integer array grid of size n x n representing a square matrix, return true if grid is an X-Matrix. Otherwise, return false.

 */

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    bool checkXMatrix(vector<vector<int>> &grid)
    {
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                //                 for diagonal elements
                if (i == j || i + j == grid.size() - 1)
                {
                    if (grid[i][j] == 0)
                    {
                        return false;
                    }
                }
                else if (i != j || i + j != grid.size() - 1)
                {
                    if (grid[i][j] != 0)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};