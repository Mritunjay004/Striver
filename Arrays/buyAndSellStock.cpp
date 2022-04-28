int maxProfit(vector<int> &prices) {
  int minimumPrice = INT_MAX;
  int maxProf = 0;

  for (int i = 0; i < prices.size(); i++) {
    minimumPrice = min(minimumPrice, prices[i]);
    maxProf = max(maxProf, prices[i] - minimumPrice);
  }

  return maxProf;
}