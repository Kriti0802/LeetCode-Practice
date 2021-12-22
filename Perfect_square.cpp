#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool isPerfectSquare(int num)
    {
        for (int i = 0; (long long)i * i <= num; i++)
        {
            if (i * i == num)
                return 1;
        }
        return 0;
    }
};