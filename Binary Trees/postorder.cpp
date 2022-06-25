vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> postorder;

    if (root == NULL)
        return postorder;
    TreeNode *curr = root;
    TreeNode *tmp;
    stack<TreeNode *> stk;
    while (curr != NULL or !stk.empty())
    {
        if (curr != NULL)
        {
            stk.push(curr);
            curr = curr->left;
        }
        else
        {
            tmp = stk.top()->right;
            if (tmp == NULL)
            {
                tmp = stk.top();
                stk.pop();
                postorder.push_back(tmp->val);
                while (!stk.empty() and tmp == stk.top()->right)
                {
                    tmp = stk.top();
                    stk.pop();
                    postorder.push_back(tmp->val);
                }
            }
            else
                curr = tmp;
        }
    }
    return postorder;
}
