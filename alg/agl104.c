// https://leetcode.cn/problems/maximum-depth-of-binary-tree/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int findMax(struct TreeNode *root, int level)
{
    if (!root)
    {
        return level;
    }
    if (!root->left && !root->right)
    {
        return level;
    }
    level++;
    int mleft = findMax(root->left, level);
    int mright = findMax(root->right, level);
    return mleft > mright ? mleft : mright;
}
int maxDepth(struct TreeNode *root)
{
    if (!root)
    {
        return 0;
    }
    return findMax(root, 1);
}

int main(int argc, char const *argv[])
{

    return 0;
}
