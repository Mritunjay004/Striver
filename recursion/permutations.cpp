#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> curr;
    vector<vector<int>> result;
    vector<bool> visited(nums.size());
    backtrack(result, nums, curr, visited);
    return result;
}

void backtrack(vector<vector<int>> &result, vector<int> nums, vector<int> &curr, vector<bool> &visited)
{
    if (curr.size() == nums.size())
    {
        result.push_back(curr);
        return;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (visited[i] == true)
            continue;
        curr.push_back(nums[i]);
        visited[i] = true;
        backtrack(result, nums, curr, visited);
        curr.pop_back();
        visited[i] = false;
    }
}

int main()
{
}
