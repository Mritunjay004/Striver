int longestConsecutive(vector<int> &nums) {
  unordered_set<int> hashSet;
  for (int num : nums)
    hashSet.insert(num);

  int longestStreak = 0;

  for (int num : nums) {
    if (!hashSet.count(num - 1)) {
      int currNum = num;
      int currStreak = 1;
      while (hashSet.count(currNum + 1)) {
        currNum++;
        currStreak++;
      }
      longestStreak = max(currStreak, longestStreak);
    }
  }
  return longestStreak;
}