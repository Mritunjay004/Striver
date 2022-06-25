bool comparison(Item a, Item b) {
  double r1 = (double)a.value / (double)a.weight;
  double r2 = (double)b.value / (double)b.weight;
  return r1 > r2;
}

double fractionalKnapsack(int W, Item arr[], int n) {
  sort(arr, arr + n, comparison);

  int currWeight = 0;
  double finalValue = 0.0;
  for (int i = 0; i < n; i++) {
    if (currWeight + arr[i].weight <= W) {
      currWeight += arr[i].weight;
      finalValue += arr[i].value;
    } else {
      int remain = W - currWeight;
      finalValue += ((double)arr[i].value / (double)arr[i].weight) * remain;
      break;
    }
  }
  return finalValue;
}