bool isLeaf(TreeNode<int> *root) { return !root->left and !root->right; }

void addLeftBoundary(TreeNode<int> *root, vector<int> &res)
{
    TreeNode<int> *cur = root->left;

    while (cur)
    {
        if (!isLeaf(cur))
            res.push_back(cur->data);
        if (cur->left)
            cur = cur->left;
        else
            cur = cur->right;
    }
}

void addRightBoundary(TreeNode<int> *root, vector<int> &res)
{
    TreeNode<int> *cur = root->right;
    vector<int> temp;

    while (cur)
    {
        if (!isLeaf(cur))
            temp.push_back(cur->data);
        if (cur->right)
            cur = cur->right;
        else
            cur = cur->left;
    }

    for (int i = temp.size() - 1; i >= 0; i--)
        res.push_back(temp[i]);
}

void addLeaves(TreeNode<int> *root, vector<int> &res)
{
    if (isLeaf(root))
    {
        res.push_back(root->data);
        return;
    }

    if (root->left)
        addLeaves(root->left, res);
    if (root->right)
        addLeaves(root->right, res);
}

vector<int> traverseBoundary(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> res;
    if (!root)
        return res;

    if (!isLeaf(root))
        res.push_back(root->data);

    addLeftBoundary(root, res);
    addLeaves(root, res);
    addRightBoundary(root, res);

    return res;
}
