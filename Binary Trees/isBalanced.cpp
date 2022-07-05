int height(TreeNode *node)
{
    if (!node)
        return 0;

    return 1 + max(height(node->left), height(node->right));
}

bool isBalanced(TreeNode *root)
{
    if (!root)
        return true;

    if (abs(height(root->left) - height(root->right)) > 1)
        return false;

    return isBalanced(root->left) and isBalanced(root->right);
}
