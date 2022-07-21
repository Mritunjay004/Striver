#include <bits/stdc++.h>
using namespace std;

int maxSumIS(int arr[], int n)
{
    // Your code goes here
    int msis[n];

    for (int i = 0; i < n; i++)
        msis[i] = arr[i];

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] < arr[i] and msis[i] < msis[j] + arr[i])
                msis[i] = msis[j] + arr[i];
        }
    }

    return *max_element(msis, msis + n);
}
