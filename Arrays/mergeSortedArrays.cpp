void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int p1 = m - 1, p2 = n - 1, i = m + n - 1;

    while (p2 >= 0)
    {
        // * p1 >= 0 because for cases if p1 is null then also we have to add other elements if they exist
        if (p1 >= 0 and nums1[p1] > nums2[p2])
            nums1[i--] = nums1[p1--];
        else
            nums1[i--] = nums2[p2--];
    }
}
