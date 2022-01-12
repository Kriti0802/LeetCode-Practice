/*Given a string s consisting of only the characters 'a' and 'b',
return true if every 'a' appears before every 'b' in the string. Otherwise, return false.*/

#include <iostream>
using namespace std;
class Solution
{
public:
    bool checkString(string s)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b' && s[i + 1] == 'a')
            {
                return false;
                break;
            }
        }
        return true;
    }
};
