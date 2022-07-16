#include <bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
    // Your code here
    int arr[n + 1][W + 1];

    for (int i = 0; i <= n; i++)
    {
        for (int w = 0; w <= W; w++)
        {
            if (w == 0 or i == 0)
                arr[i][w] = 0;

            else if (wt[i - 1] <= w)
                arr[i][w] = max(val[i - 1] + arr[i - 1][w - wt[i - 1]], arr[i - 1][w]);
            else
                arr[i][w] = arr[i - 1][w];
        }
    }
    return arr[n][W];
}

int main()
{
    int val[] = {1, 4, 5, 7};
    int wt[] = {1, 3, 4, 5};
    int W = 7;
    int n = sizeof(val) / sizeof(val[0]);

    cout << knapSack(W, wt, val, n);

    return 0;
}
