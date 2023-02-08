// https://leetcode.cn/problems/plus-one/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize)
{

    *returnSize = digitsSize;

    if (digits[digitsSize - 1] != 9)
    {
        digits[digitsSize - 1]++;
        return digits;
    }

    for (int i = digitsSize; i > 0; i--)
    {

        if (digits[i - 1] != 9)
        {
            digits[i - 1]++;
            return digits;
        }
        digits[i - 1] = 0;
    }
    int* ans = (int*)malloc(sizeof(int) * (digitsSize + 1));
    memset(ans, 0, sizeof(int) * (digitsSize + 1));
    printf("r pointer %p\n",(void*)&ans);
    ans[0] = 1;
    *returnSize = digitsSize + 1;
    return ans;
}

int main(int argc, char const *argv[])
{
    int r = 3;
    int p[] = {9, 9, 9};
    int *rs ;
    rs = plusOne(&p, 3, &r);
    printf("return size %d \n", r );
    for (int i = 0; i < r; i++)
    {
        printf("result %d \n", rs[i]);
    }
    

    return 0;
}
