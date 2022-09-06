#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void fnc(vector<vector<int>> &m, int n, int i, int j, string current)
{
    if (i == n - 1 and j == n - 1)
    {
        if (m[i][j] == 1)
            ans.push_back(current);
        return;
    }

    if (i < 0 or j < 0 or i >= n or j >= n or m[i][j] == 0)
        return;

    m[i][j] = 0;
    fnc(m, n, i, j + 1, current + 'R');
    fnc(m, n, i - 1, j, current + 'U');
    fnc(m, n, i, j - 1, current + 'L');
    fnc(m, n, i + 1, j, current + 'D');
    m[i][j] = 1;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    fnc(m, n, 0, 0, "");
    return ans;
}

int main()
{
}
