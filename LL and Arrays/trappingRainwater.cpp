int trap(vector<int> &height) {
  int n = height.size();
  int i = 0, j = n - 1, maxLeft = 0, maxRight = 0, water = 0;
  while (i < j) {
    if (height[i] <= height[j]) {
      maxLeft = max(maxLeft, height[i]);
      water += maxLeft - height[i];
      i++;
    } else {
      maxRight = max(maxRight, height[j]);
      water += maxRight - height[j];
      j--;
    }
  }
  return water;
}