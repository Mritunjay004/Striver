vector<vector<int>> fourSum(vector<int> &nums, int target) {
  vector<vector<int>> ans;
  int n = nums.size();
  sort(nums.begin(), nums.end());
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int target2 = target - nums[i] - nums[j];
      int front = j + 1;
      int back = n - 1;
      while (front < back) {
        int twoSum = nums[front] + nums[back];
        if (twoSum < target2)
          front++;
        else if (twoSum > target2)
          back--;
        else {
          vector<int> quadruple(4, 0);
          quadruple[0] = nums[i];
          quadruple[1] = nums[j];
          quadruple[2] = nums[front];
          quadruple[3] = nums[back];
          ans.push_back(quadruple);

          while (front < back and nums[front] == quadruple[2])
            front++;
          while (front < back and nums[back] == quadruple[3])
            back--;
        }
      }

      while (j + 1 < n and nums[j + 1] == nums[j])
        j++;
    }

    while (i + 1 < n and nums[i + 1] == nums[i])
      i++;
  }

  return ans;
}