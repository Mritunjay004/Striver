#include <bits/stdc++.h>
using namespace std;

vector<int> computeLPS(string str)
{
    int len = str.length();
    vector<int> lps(len);
    int i = 1, j = 0;
    lps[0] = 0;

    while (i < len)
    {
        if (str[i] == str[j])
        {
            j++;
            lps[i] = j;
            i++;
        }
        else
        {
            if (j != 0)
                j = lps[j - 1];
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
    return lps;
}

int solve(string A)
{
    string revStr = A;
    reverse(revStr.begin(), revStr.end());
    string concat = A + "$" + revStr;
    vector<int> lps = computeLPS(concat);
    return A.length() - lps.back();
}
