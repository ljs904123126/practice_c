// https://leetcode.cn/problems/same-tree/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int isSymmetricCompare(struct TreeNode *p, struct TreeNode *q)
{

    if (p == NULL && q == NULL)
    {
        return 1;
    }
    else if (p == NULL || q == NULL)
    {
        return 0;
    }
    return p->val == q->val && isSymmetricCompare(p->left, q->right) && isSymmetricCompare(p->right, q->left);
}

int isSymmetric(struct TreeNode *root)
{
    if (!root)
    {
        return 1;
    }
    return isSymmetricCompare(root->left, root->right);
}

int main(int argc, char const *argv[])
{

    return 0;
}
