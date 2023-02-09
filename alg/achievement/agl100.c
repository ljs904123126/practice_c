//https://leetcode.cn/problems/same-tree/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct TreeNode
{
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL) {
        return 1;
    } else if (p == NULL || q == NULL) {
        return 0;
    } else if (p->val != q->val) {
        return 0;
    } else {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
}

int main(int argc, char const *argv[])
{

    return 0;
}
