vector<vector<int>> merge(vector<vector<int>> &intervals) {
  vector<vector<int>> mergedIntervals;

  sort(intervals.begin(), intervals.end());
  vector<int> tempInterval = intervals[0];

  for (int i = 1; i < intervals.size(); i++) {
    if (tempInterval[1] >= intervals[i][0])
      tempInterval[1] = max(intervals[i][1], tempInterval[1]);
    else {
      mergedIntervals.push_back(tempInterval);
      tempInterval = intervals[i];
    }
  }
  mergedIntervals.push_back(tempInterval);
  return mergedIntervals;
}