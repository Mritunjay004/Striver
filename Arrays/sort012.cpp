void sortColors(vector<int> &nums) {
  int low = 0, mid = 0;
  int high = nums.size() - 1;

  while (mid <= high) {
    if (nums[mid] == 0) {
      swap(nums[low], nums[mid]);
      low++;
      mid++;
    }

    if (nums[mid] == 1) {
      mid++;
    }

    if (nums[mid] == 2) {
      swap(nums[high], nums[mid]);
      high--;
    }
  }
}