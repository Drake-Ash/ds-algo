#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> checker;
        string::iterator it;

        for (it = s.begin(); it != s.end(); it++)
        {
            if (*it == '[' || *it == '(' || *it == '{')
                checker.push(*it);
            else if (*it == ']' || *it == ')' || *it == '}')
            {
                if (checker.empty())
                    return false;
                if ((*it == ']' && checker.top() != '[') || (*it == ')' && checker.top() != '(') || (*it == '}' && checker.top() != '{'))
                    return false;
                checker.pop();
            }
        }
        if (!checker.empty())
            return false;
        return true;
    }
};

int main()
{
    string s = "[]([])";
    cout << Solution().isValid(s) << '\n';
    return 0;
}
