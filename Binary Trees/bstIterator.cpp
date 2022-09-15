#include <bits/stdc++.h>
using namespace std;

class BSTIterator
{
private:
    stack<TreeNode *> stk;

    void pushLeftAll(TreeNode *node)
    {
        for (; node != NULL;)
        {

            stk.push(node);
            node = node->left;
        }
    }

public:
    // goes to extreme left as we have to follow in-order
    BSTIterator(TreeNode *root)
    {
        pushLeftAll(root);
    }

    int next()
    {
        TreeNode *res = stk.top();
        stk.pop();
        pushLeftAll(res->right); // send it to the right
        return res->val;
    }

    bool hasNext()
    {
        return !stk.empty();
    }
};

int main()
{
}
