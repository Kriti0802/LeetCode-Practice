#include <iostream>
using namespace std;

class Solution
{
public:
    int arrangeCoins(int n)
    {
        int count = 0;
        for (int i = 0; i <= n; i++)
        {
            if ((n - i) < 0)
                break;
            count++;
            n = n - i;
        }
    }
};

int main()
{
    int n = 5;
    Solution s;
    cout << s.arrangeCoins(n) << endl;
    return 0;
}