int idx;
unordered_map<int, int> mpp;

TreeNode *solve(vector<int> in, vector<int> post, int lb, int ub)
{
    if (lb > ub)
        return NULL;

    TreeNode *res = new TreeNode(post[idx--]);

    int mid = mpp[res->val];

    res->right = solve(in, post, mid + 1, ub);
    res->left = solve(in, post, lb, mid - 1);

    return res;
}

TreeNode *buildTree(vector<int> &in, vector<int> &post)
{
    int n = post.size();

    for (int i = 0; i < n; i++)
        mpp[in[i]] = i;

    idx = n - 1;

    TreeNode *root = solve(in, post, 0, n - 1);
    return root;
}
