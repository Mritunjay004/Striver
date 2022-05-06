int solve(vector<int> &arr, int K) {
    map<int, int> freq;
    int count = 0, xorr = 0;
    for (int num : arr) {
    xorr = xorr ^ num;
    if (xorr == K)
        count++;
    if (freq.find(xorr ^ K) != freq.end())
        count += freq[xorr ^ K];
    freq[xorr]++;
    }
    return count;
}