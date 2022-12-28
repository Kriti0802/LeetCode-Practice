/*Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int row=matrix.size();
        int col=matrix[0].size();
        
        int start=0;
        int end=row*col-1;
        
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            int element=matrix[mid/col][mid%col];
            if(element==target)
            {
                return 1;
            }
            if(element<target)
            {
               start=mid+1;    
            }
            else if(element>target)
            {
                end=mid-1;
            }
         mid=start+(end-start)/2;
        
        }
        return 0;
    }
}; 