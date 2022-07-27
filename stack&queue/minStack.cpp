#include <bits/stdc++.h>
using namespace std;

stack<int> stk;
stack<int> min_stk;

void push(int val)
{
    if (min_stk.empty() or val <= min_stk.top())
        min_stk.push(val);
    stk.push(val);
}

void pop()
{
    if (stk.top() == min_stk.top())
        min_stk.pop();
    stk.pop();
}

int top()
{
    return stk.top();
}

int getMin()
{
    return min_stk.top();
}

int main()
{
}
