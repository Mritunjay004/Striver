int lengthOfLongestSubstring(string s) {
  int start = 0, res = 0;
  unordered_map<char, int> mpp;
  for (int i=0; i < s.length(); i++) {
    if (mpp.find(s[i]) != mpp.end() and mpp[s[i]] >= start)
      start = mpp[s[i]] + 1;
    mpp[s[i]] = i;
    res = max(res, i - start + 1);
  }
  return res;
}