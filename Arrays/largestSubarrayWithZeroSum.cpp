int maxLen(vector<int> &A, int n) {
  int sum = 0, maxi = 0;
  unordered_map<int, int> mpp;
  for (int i = 0; i < n; i++) {
    sum += A[i];
    if (sum == 0)
      maxi = i + 1;
    else {
      if (mpp.find(sum) != mpp.end())
        maxi = max(maxi, i - mpp[sum]);
      else
        mpp[sum] = i;
    }
  }
  return maxi;
}