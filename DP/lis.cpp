#include <bits/stdc++.h>
using namespace std;

int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    vector<int> temp(n, 1);

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (nums[j] < nums[i] and temp[i] < temp[j] + 1)
                temp[i] = temp[j] + 1;
        }
    }

    return *max_element(temp.begin(), temp.end());
}

int main()
{
}
