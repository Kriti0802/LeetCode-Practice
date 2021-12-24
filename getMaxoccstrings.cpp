// Maximum Occuring Character

#include <iostream>
#include <vector>
using namespace std;

char getMaxOccuringChar(string s)
{
    int arr[26] = {0};
    // create an array of count of occurence
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int num = 0;
        // lowercase
        if (ch >= 'a' && ch <= 'z')
        {
            num = ch - 'a';
        }
        // uppercase
        else
        {
            num = ch - 'A';
        }
        arr[num]++;
    }
    int max = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            ans = i;
            max = arr[i];
        }
    }
    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    string s;
    cout << "Enter a string :";
    cin >> s;
    cout << getMaxOccuringChar(s) << endl;
}