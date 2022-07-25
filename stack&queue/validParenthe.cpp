#include <bits/stdc++.h>
using namespace std;

bool isValid(string s)
{
    stack<int> stk;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' or s[i] == '(' or s[i] == '[')
            stk.push(s[i]);
        else
        {
            if (stk.empty())
                return false;
            char c = stk.top();
            stk.pop();
            if ((s[i] == ')' and c == '(') or (s[i] == '}' and c == '{') or (s[i] == ']' and c == '['))
                continue;
            else
                return false;
        }
    }
    return stk.empty();
}

int main()
{
}
