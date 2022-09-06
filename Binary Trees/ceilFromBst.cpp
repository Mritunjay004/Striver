#include <bits/stdc++.h>
using namespace std;

int findCeil(BinaryTreeNode<int> *node, int x)
{
    int ceil = -1;
    while (node)
    {
        if (node->data == x)
            return node->data;
        else if (node->data < x)
            node = node->right;
        else
        {
            ceil = node->data;
            node = node->left;
        }
    }
    return ceil;
}

int main()
{
}
