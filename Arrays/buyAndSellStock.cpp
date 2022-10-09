int maxProfit(vector<int> &nums)
{
    int maxP = 0;
    int smallNum = nums[0];
    int n = nums.size();
    for (int i = 1; i < n; i++)
    {
        smallNum = min(smallNum, nums[i]);
        maxP = max(maxP, nums[i] - smallNum);
    }
    return maxP;
}
