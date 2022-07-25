#include <bits/stdc++.h>
using namespace std;

int eggDrop(int e, int f)
{
    int dp[f + 1][e + 1];
    for (int i = 1; i <= e; i++)
    {
        dp[0][i] = 0;
        dp[1][i] = 1;
    }

    for (int i = 1; i <= f; i++)
        dp[i][1] = i;

    for (int i = 2; i <= f; i++)
    {
        for (int j = 2; j <= e; j++)
        {
            dp[i][j] = INT_MAX;
            for (int x = 1; x <= i; x++)
                dp[i][j] = min(dp[i][j], 1 + max(dp[x - 1][j - 1], dp[i - x][j]));
        }
    }
    return dp[f][e];
}

int main()
{
}
