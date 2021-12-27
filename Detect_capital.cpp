/*We define the usage of capitals in a word to be right when one of the following cases holds:
All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Given a string word, return true if the usage of capitals in it is right.*/

#include <iostream>
using namespace std;

class Solution
{
public:
    bool detectCapitalUse(string word)
    {
        int count = 0;
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                count++;
            }
        }
        if (count == word.size())
        {
            return true;
        }
        if (count == 1 && word[0] >= 'A' && word[0] <= 'Z')
        {
            return true;
        }
        if (count == 0)
        {
            return true;
        }

        return false;
    }
};
int main()
{
    string n = "UAE";
    Solution s;
    cout << s.detectCapitalUse(n) << endl;
}