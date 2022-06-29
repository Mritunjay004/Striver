vector<int> leftView(Node *root)
{
    // Your code here
    queue<Node *> q;
    vector<int> ans;
    if (root == NULL)
        return ans;
    q.push(root);

    while (!q.empty())
    {
        int sz = q.size();
        ans.push_back(q.front()->data);
        while (sz--)
        {
            Node *t = q.front();
            q.pop();
            if (t->left)
                q.push(t->left);
            if (t->right)
                q.push(t->right);
        }
    }
    return ans;
}
