
bool getPaths(TreeNode *root, vector<int> &arr, int x)
{
    if (!root)
        return false;
    arr.push_back(root->val);

    if (root->val == x)
        return true;

    if (getPaths(root->left, arr, x) or getPaths(root->right, arr, x))
        return true;

    arr.pop_back();
    return false;
}
