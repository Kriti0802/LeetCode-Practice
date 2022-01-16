/*Given an integer n, return true if it is a power of four. Otherwise, return false.

An integer n is a power of four, if there exists an integer x such that n == 4x.*/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1)
            return 0;
        while(n!=1){
            if(n%4!=0){
return 0;}
            n=n/4;
        }
        return 1;
    }
    
};