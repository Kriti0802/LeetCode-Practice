/*Given a square matrix mat, return the sum of the matrix diagonals.

Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal.*/


#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat.size();j++)
            {
                if(i==j || i+j==mat.size()-1)
                {
                    sum+=mat[i][j];
                }
            }
        }
        return sum;
    }
};