int search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (nums[mid] == target)
            return mid;

        // if start is less than mid then we have some part of the initial sorted array
        if (nums[start] <= nums[mid])
        {
            if (nums[start] <= target and target <= nums[mid])
                end = mid;
            // it will be next it
            else
                start = mid + 1;
        }
        // if we have more elements than the initial sorted array then we can check
        else
        {
            if (nums[mid] <= target and target <= nums[end])
                start = mid;
            // it will be behind it
            else
                end = mid - 1;
        }
    }
    return -1;
}
