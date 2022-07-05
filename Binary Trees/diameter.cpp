int ma = INT_MIN;

int func(Node *root)
{
    // Your code here
    if (!root)
        return 0;

    int x = func(root->left);
    int y = func(root->right);

    ma = max(ma, x + y + 1);
    return (max(x, y) + 1);
}

int diameter(Node *root)
{
    // Your code here
    int x = func(root);
    return ma;
}
