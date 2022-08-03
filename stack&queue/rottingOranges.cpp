#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>> &v)
{
    queue<pair<int, int>> q;
    int n = v.size(), m = v[0].size();
    int c = 0, ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (v[i][j] == 2)
                q.push({i, j});
            if (v[i][j] == 1)
                c++;
        }
    }

    while (!q.empty())
    {
        int s = q.size();
        if (c == 0)
            return ans;
        while (s--)
        {
            auto a = q.front();
            q.pop();
            int i = a.first;
            int j = a.second;

            if (i > 0)
            {
                if (v[i - 1][j] == 1)
                {
                    c--;
                    v[i - 1][j] = 2;
                    q.push({i - 1, j});
                }
            }
            if (j > 0)
            {
                if (v[i][j - 1] == 1)
                {
                    c--;
                    v[i][j - 1] = 2;
                    q.push({i, j - 1});
                }
            }
            if (i < n - 1)
            {
                if (v[i + 1][j] == 1)
                {
                    c--;
                    v[i + 1][j] = 2;
                    q.push({i + 1, j});
                }
            }
            if (j < m - 1)
            {
                if (v[i][j + 1] == 1)
                {
                    c--;
                    v[i][j + 1] = 2;
                    q.push({i, j + 1});
                }
            }
        }
        ans++;
    }
    return c == 0 ? ans : -1;
}

int main()
{
}
