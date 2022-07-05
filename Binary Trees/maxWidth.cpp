int widthOfBinaryTree(TreeNode *root)
{
    if (root == NULL)
        return 0;

    int ans = 0;
    queue<pair<TreeNode *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        int minIndex = q.front().second;
        int size = q.size();
        int first, last;
        for (int i = 0; i < size; i++)
        {
            long currentIdx = q.front().second - minIndex;
            TreeNode *node = q.front().first;
            q.pop();

            if (i == 0)
                first = currentIdx;
            if (i == size - 1)
                last = currentIdx;
            if (node->left != NULL)
                q.push({node->left, currentIdx * 2 + 1});
            if (node->right != NULL)
                q.push({node->right, currentIdx * 2 + 2});
        }
        ans = max(ans, last - first + 1);
    }
    return ans;
}
