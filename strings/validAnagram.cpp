#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t)
{
    if (s.length() != t.length())
        return false;

    int arr[26] = {};

    for (auto c : s)
        arr[c - 'a']++;
    for (auto c : t)
    {
        if (arr[c - 'a'] == 0)
            return false;
        arr[c - 'a']--;
    }
    return true;
}

int main()
{
}
