#include <bits/stdc++.h>
using namespace std;

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    vector<long long> ans(n);
    stack<int> stk;

    for (int i = 0; i < n; i++)
    {
        if (stk.empty())
        {
            stk.push(i);
            continue;
        }
        while (!stk.empty() and arr[i] > arr[stk.top()])
        {
            ans[stk.top()] = arr[i];
            stk.pop();
        }
        stk.push(i);
    }
    while (!stk.empty())
    {
        ans[stk.top()] = -1;
        stk.pop();
    }
    return ans;
}

int main()
{
}
