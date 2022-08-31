#include <bits/stdc++.h>
using namespace std;

bool isSafe(int i, int j, bool graph[101][101], int V, vector<int> &usedColor)
{
    for (int k = 0; k < V; k++)
    {
        if (graph[i][k] == 1 and usedColor[k] == j)
            return false;
    }
    return true;
}

bool fnc(bool graph[101][101], int m, int V, int i, vector<int> &usedColor)
{
    if (i == V)
        return true;
    for (int j = 0; j < m; j++)
    {
        if (isSafe(i, j, graph, V, usedColor))
        {
            usedColor[i] = j;
            if (fnc(graph, m, V, i + 1, usedColor))
                return true;
            usedColor[i] = -1;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    vector<int> usedColor(V, -1);
    return fnc(graph, m, V, 0, usedColor);
}

int main()
{
}
