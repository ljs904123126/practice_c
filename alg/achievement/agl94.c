// https://leetcode.cn/problems/merge-sorted-array/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void printTree(struct TreeNode *root, int *returnSize, int *res)
{
    if (!root)
    {
        return;
    }
    printTree(root->left, returnSize, res);
    res[(*returnSize)] = root->val;
    (*returnSize)++;
    printTree(root->right, returnSize, res);
}

int *inorderTraversal(struct TreeNode *root, int *returnSize)
{
    int *res = malloc(sizeof(int) * 501);
     *returnSize = 0;
    printTree(root, returnSize, res);
    return res;
}

int main(int argc, char const *argv[])
{

    return 0;
}
