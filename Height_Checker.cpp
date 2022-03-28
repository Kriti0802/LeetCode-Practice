/*A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height. Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.

You are given an integer array heights representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).

Return the number of indices where heights[i] != expected[i].*/


#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
           vector<int>expected =heights;
        int ans=0;
         sort(expected.begin(),expected.end());
        for(int i=0;i<heights.size();i++){
           
            if(heights[i]!=expected[i])
            ans++;
        }
        return ans;
    }
};