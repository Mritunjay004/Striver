#include <bits/stdc++.h>
using namespace std;

double multiply(double mid, int n)
{
    double ans = 1.0;
    for (int i = 0; i < n; i++)
        ans *= mid;
    return ans;
}

double findNthRootOfM(int n, int m)
{
    double low = 1;
    double high = m;
    double eps = 1e-7;

    while ((high - low) > eps)
    {
        double mid = (low + high) / 2.0;
        if (multiply(mid, n) < m)
            low = mid;
        else
            high = mid;
    }
    return low;
}

int main()
{
    cout << findNthRootOfM(109, 466) << endl;
}
