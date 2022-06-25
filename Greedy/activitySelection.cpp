int maxMeetings(int start[], int end[], int n) {
  int x;
  vector<pair<int, int>> v;
  for (int i = 0; i < n; i++)
    v.push_back({end[i], start[i]});
  sort(v.begin(), v.end());
  x = 1;
  int prevend = v[0].first;
  for (int i = 1; i < n; i++) {
    if (v[i].second > prevend) {
      x++;
      prevend = v[i].first;
    }
  }
  return x;
}