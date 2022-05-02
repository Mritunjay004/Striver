int merge(long long arr[], long long temp[], long long int left,
          long long int mid, long long int right) {
  long long int i, j, k;
  i = left;
  j = mid;
  k = left;
  long long int invCount = 0;

  while ((i <= mid - 1) and (j <= right)) {
    if (arr[i] < arr[j])
      temp[k++] = arr[i++];
    else {
      temp[k++] = arr[j++];
      invCount += mid - i;
    }
  }

  while (i <= mid - 1)
    temp[k++] = arr[i++];
  while (j <= right)
    temp[k++] = arr[j++];

  for (i = left; i <= right; i++)
    arr[i] = temp[i];

  return invCount;
}

int _mergeSort(long long arr[], long long temp[], long long int left,
               long long int right) {
  long long int mid, invCount = 0;
  if (right > left) {
    mid = (right + left) / 2;
    invCount += _mergeSort(arr, temp, left, mid);
    invCount += _mergeSort(arr, temp, mid + 1, right);
    invCount += merge(arr, temp, left, mid + 1, right);
  }

  return invCount;
}