/*Given a binary string s ​​​​​without leading zeros, return true​​​ if s contains at most 
one contiguous segment of ones. Otherwise, return false.*/


#include <iostream>
using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        for(int i=0;i<s.size();i++){
             if(s[i]=='0'&&s[i+1]=='1')
               return false;
            
        }
        return true;
    }
};
int main(){
    
}