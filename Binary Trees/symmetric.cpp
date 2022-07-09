bool isMirror(TreeNode *a, TreeNode *b)
{
    if (!a and !b)
        return true;

    if (a and b)
    {
        return a->val == b->val and isMirror(a->left, b->right) and
               isMirror(a->right, b->left);
    }
    else
        return false;
}
