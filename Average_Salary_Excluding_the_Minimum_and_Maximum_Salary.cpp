/*You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Solution
{
public:
    double average(vector<int> &salary)
    {
        double avg = 0;
        double sum = 0;
        double diff = 0;
        int n = salary.size();
        sort(salary.begin(), salary.end());
        double maxx = salary[salary.size() - 1];
        double minn = salary[0];
        cout << "min= " << minn << "max= " << maxx << endl;
        for (int i = 0; i < salary.size(); i++)
        {
            sum += salary[i];
            diff = abs(sum - (maxx + minn));
            avg = diff / (n - 2);
        }
        cout << "d= " << diff;
        return avg;
    }
};