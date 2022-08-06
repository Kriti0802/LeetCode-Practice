/*You are given a 0-indexed string num of length n consisting of digits.

Return true if for every index i in the range 0 <= i < n, the digit i occurs num[i] times in num, otherwise return false.*/
#include <bits\stdc++.h>
#include <vector>
using namespace std;
class Solution {
public: 
    bool digitCount(string num) {
        int arr[1000]={0};
        
        for(int i=0;i<num.length();i++)
        {
             ++arr[num[i]-'0']; 
            
            cout<<arr[num[i]-'0']<<" "<<endl;
        }
        for(int i=0;i<num.length();i++)
        {
            if((num[i]-'0')!=arr[i]){
                return false;
            }
        }
    return true;
    }
}; 
