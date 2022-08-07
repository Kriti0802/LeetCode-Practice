/*A password is said to be strong if it satisfies all the following criteria:

It has at least 8 characters.
It contains at least one lowercase letter.
It contains at least one uppercase letter.
It contains at least one digit.
It contains at least one special character. The special characters are the characters in the following string: "!@#$%^&*()-+".
It does not contain 2 of the same character in adjacent positions (i.e., "aab" violates this condition, but "aba" does not).
Given a string password, return true if it is a strong password. Otherwise, return false.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    bool strongPasswordCheckerII(string s)
    {

        if (s.size() < 8)
        {
            return false;
        }
        bool upper = false, lower = false, digit = false, special = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                lower = true;
            }
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                upper = true;
            }
            if (s[i] >= '0' && s[i] <= '9')
            {
                digit = true;
            }
            if (s[i] == '!' || s[i] == '@' || s[i] == '#' || s[i] == '$' || s[i] == '%' || s[i] == '^' || s[i] == '&' ||
                s[i] == '*' || s[i] == '(' || s[i] == ')' || s[i] == '-' || s[i] == '+')
            {
                special = true;
            }
            if (i > 0 && s[i - 1] == s[i])
            {
                return false;
            }
        }

        return upper && lower && digit && special;
    }
};
// or
class Solution
{
public:
    bool strongPasswordCheckerII(string password)
    {
        bool length = false, lower = false, upper = false, digit = false, special = false;
        int i;
        if (password.length() >= 8)
        {
            length = true;
        }
        for (char ch : password)
        {
            if (isupper(ch))
            {
                upper = true;
            }
            else if (islower(ch))
            {
                lower = true;
            }
            else if (isdigit(ch))
            {
                digit = true;
            }
            else
            {
                special = true;
            }
        }

        for (i = 0; i < password.length() - 1; i++)
        {
            if (password[i] == password[i + 1])
            {
                return false;
            }
        }
        if (special && digit && upper && lower && length)
        {
            return true;
        }
        return false;
    }
};