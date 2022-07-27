#include <bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> stk;

    for (int i = n - 1; i >= 0; i--)
    {
        if (stk.empty())
        {
            stk.push(i);
            continue;
        }
        while (!stk.empty() and arr[i] < arr[stk.top()])
        {
            ans[stk.top()] = i;
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

vector<int> nextSmaller(vector<int> arr)
{
    int n = arr.size();
    vector<int> ans(n);
    stack<int> stk;

    for (int i = 0; i < n; i++)
    {
        if (stk.empty())
        {
            stk.push(i);
            continue;
        }
        while (!stk.empty() and arr[i] < arr[stk.top()])
        {
            ans[stk.top()] = i;
            stk.pop();
        }
        stk.push(i);
    }
    while (!stk.empty())
    {
        ans[stk.top()] = n;
        stk.pop();
    }
    return ans;
}

int largestRectangleArea(vector<int> &heights)
{
    int n = heights.size();
    int maxAns = 0;
    vector<int> prev = prevSmaller(heights);
    vector<int> next = nextSmaller(heights);

    for (int i = 0; i < n; i++)
    {
        int cur = (next[i] - prev[i] - 1) * heights[i];
        maxAns = max(maxAns, cur);
    }
    return maxAns;
}

int main()
{
    vector<int> given = {4, 2, 1, 5, 6, 3, 2, 4, 2};
    cout << largestRectangleArea(given) << endl;
}
