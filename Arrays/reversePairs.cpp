int merge(vector<int> &nums, int low, int mid, int high) {
  int count = 0;
  int j = mid + 1;

  for (int i = low; i <= mid; i++) {
    while (j <= high and nums[i] > 2LL * nums[j])
      j++;
    count += (j - (mid + 1));
  }

  vector<int> temp;
  int left = low, right = mid + 1;
  while (left <= mid and right <= high) {
    if (nums[left] <= nums[right])
      temp.push_back(nums[left++]);
    else
      temp.push_back(nums[right++]);
  }

  while (left <= mid)
    temp.push_back(nums[left++]);
  while (right <= high)
    temp.push_back(nums[right++]);

  for (int i = low; i <= high; i++)
    nums[i] = temp[i - low]; // cause temp will always be newly placed

  return count;
}

int _mergeSort(vector<int> &nums, int low, int high) {
  int mid, count = 0;
  if (high > low) {
    mid = (high + low) / 2;
    count += _mergeSort(nums, low, mid);
    count += _mergeSort(nums, mid + 1, high);
    count += merge(nums, low, mid, high);
  }

  return count;
}

int reversePairs(vector<int> &nums) {
  int count = _mergeSort(nums, 0, nums.size() - 1);
  return count;
}