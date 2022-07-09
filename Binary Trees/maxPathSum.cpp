int maxSum = INT_MIN;

int func(TreeNode *root)
{
    if (!root)
        return 0;

    int left = max(0, func(root->left));
    int right = max(0, func(root->right));

    int curSum = root->val + left + right;
    maxSum = max(curSum, maxSum);

    return max(root->val + left, root->val + right);
}

int maxPathSum(TreeNode *root)
{
    func(root);
    return maxSum;
}
