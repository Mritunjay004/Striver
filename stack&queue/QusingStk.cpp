#include <bits/stdc++.h>
using namespace std;

stack<int> input;
stack<int> output;

void push(int x)
{
    input.push(x);
}

int pop()
{
    if (output.empty())
    {
        while (!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
    }

    int x = output.top();
    output.pop();
    return x;
}

int peek()
{
    if (output.empty())
    {
        while (!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
    }

    int x = output.top();
    return x;
}

bool empty()
{
    return input.size() + output.size() == 0;
}

int main()
{
}
