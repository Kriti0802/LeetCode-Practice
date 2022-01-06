#include <iostream>
using namespace std;

class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        if (num == 0 || num % 10)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};