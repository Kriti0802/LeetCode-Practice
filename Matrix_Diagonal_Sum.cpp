/*Given a square matrix mat, return the sum of the matrix diagonals.
Only include the sum of all the elements on the primary diagonal and
 all the elements on the secondary diagonal that are not part of the primary diagonal.*/

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int Sum = 0;
        for (int i = 0; i < n; i++)
        {
            Sum = Sum + mat[i][i] + mat[i][n - 1 - i];
        }
        if (n % 2 == 0)
            return Sum;
        else
            return Sum -= mat[n / 2][n / 2];
    }
};