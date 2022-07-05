vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here.
    stack<pair<BinaryTreeNode<int> *, int>> stk;
    vector<int> pre, in, post;
    vector<vector<int>> answer;
    if (root == NULL)
        return answer;

    stk.push({root, 1});

    while (!stk.empty())
    {
        auto it = stk.top();
        stk.pop();

        if (it.second == 1)
        {
            pre.push_back(it.first->data);
            it.second++;
            stk.push(it);
            if (it.first->left != NULL)
                stk.push({it.first->left, 1});
        }

        else if (it.second == 2)
        {
            in.push_back(it.first->data);
            it.second++;
            stk.push(it);
            if (it.first->right != NULL)
                stk.push({it.first->right, 1});
        }

        else
            post.push_back(it.first->data);
    }

    answer.push_back(pre);
    answer.push_back(in);
    answer.push_back(post);

    return answer;
}
