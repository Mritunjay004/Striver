vector<int> verticalOrder(Node *root)
{
    vector<int> ans;
    if (root == NULL)
        return ans;

    queue<pair<Node *, int>> q;
    map<int, vector<int>> mpp;
    q.push({root, 0});

    while (!q.empty())
    {
        auto it = q.front();
        q.pop();
        Node *node = it.first;
        int line = it.second;

        if (mpp.find(line) == mpp.end())
        {
            vector<int> temp;
            temp.push_back(node->data);
            mpp[line] = temp;
        }
        else
        {
            mpp[line].push_back(node->data);
        }

        if (node->left != NULL)
            q.push({node->left, line - 1});

        if (node->right != NULL)
            q.push({node->right, line + 1});
    }

    for (auto it : mpp)
    {
        for (int i = 0; i < it.second.size(); i++)
            ans.push_back(it.second[i]);
    }

    return ans;
}
