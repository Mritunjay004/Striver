int findPlatform(int arr[], int dep[], int n) {
  sort(arr, arr + n);
  sort(dep, dep + n);

  int platformNeeded = 1, result = 1;
  int i = 1, j = 0;
  while (i < n and j < n) {
    if (dep[j] >= arr[i]) {
      platformNeeded++;
      i++;
      if (platformNeeded > result)
        result = platformNeeded;
    } else {
      platformNeeded--;
      j++;
    }
  }
  return result;
}