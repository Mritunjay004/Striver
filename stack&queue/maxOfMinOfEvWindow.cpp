// An efficient C++ program to find
// maximum of all minimums of
// windows of different sizes
#include <bits/stdc++.h>
using namespace std;

vector<int> maxOfMin(int arr[], int n)
{
    // Your code here
    stack<int> s;
    int left[n];
    int right[n];

    for (int i = 0; i < n; i++)
    {
        left[i] = -1;
        right[i] = n;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (s.empty())
        {
            s.push(i);
            continue;
        }
        while (!s.empty() and arr[i] < arr[s.top()])
        {
            left[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    while (!s.empty())
        s.pop();

    for (int i = 0; i < n; i++)
    {
        if (s.empty())
        {
            s.push(i);
            continue;
        }
        while (!s.empty() and arr[i] < arr[s.top()])
        {
            right[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }

    vector<int> ans(n + 1, 0);

    for (int i = 0; i < n; i++)
    {
        int len = right[i] - left[i] - 1;
        ans[len] = max(ans[len], arr[i]);
    }

    for (int i = n - 1; i >= 1; i--)
    {
        ans[i] = max(ans[i], arr[i + 1]);
    }

    vector<int> answer = vector<int>(ans.begin() + 1, ans.end());
    return answer;
}

// Driver program
int main()
{
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    maxOfMin(arr, n);
    return 0;
}
