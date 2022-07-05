bool isSameTree(TreeNode *p, TreeNode *q)
{
    if (!p or !q)
        return p == q;

    return (p->val == q->val) and isSameTree(p->left, q->left) and
           isSameTree(p->right, q->right);
}
