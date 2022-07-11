#include <bits/stdc++.h>
using namespace std;

int repeatedStringMatch(string A, string B)
{
    string temp = A;
    int copies = 1;

    while (temp.length() < B.length())
    {
        temp += A;
        copies++;
    }

    if (temp.find(B) != string::npos)
        return copies;

    temp += A;
    copies++;
    if (temp.find(B) != string::npos)
        return copies;

    return -1;
}

int main()
{
    int ans = repeatedStringMatch("abc", "cabcabca");
    cout << ans;
}
