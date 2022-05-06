#include <bits/stdc++.h>
using namespace std;
vector<int> repeatedNumber(const vector<int> &A) {
  long long int n = A.size();
  long long int missingNum = 0, repeatingNum = 0;
  long long int s = (n * (n + 1)) / 2;
  long long int p = (n * (n + 1) * (2 * n + 1)) / 6;

  for (int i = 0; i < n; i++) {
    s -= (long long int)A[i];
    p -= (long long int)A[i] * (long long int)A[i];
  }

  missingNum = (s + p / s) / 2;
  repeatingNum = missingNum - s;

  vector<int> ans;

  ans.push_back(repeatingNum);
  ans.push_back(missingNum);

  return ans;
}