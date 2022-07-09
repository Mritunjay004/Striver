void flatten(TreeNode *root)
{
    if (!root)
        return;

    while (root)
    {
        if (root->left)
        {
            TreeNode *left = root->left;
            TreeNode *current = root->left;

            while (current->right)
                current = current->right;

            current->right = root->right;
            root->left = NULL;
            root->right = left;
        }
        root = root->right;
    }
}
