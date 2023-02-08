// https://leetcode.cn/problems/search-insert-position/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int searchInsert(int *nums, int numsSize, int target)
{
    int r = 0;
    int start = 0;
    int end = numsSize - 1;
    while (end >= start)
    {
        int middle =  ((end - start) >> 1) + start;
        if (nums[middle] == target)
        {
            return middle;
        }

        if (nums[middle] > target)
        {
            r = middle;
            end = middle - 1;
        }
        else
        {
            start = middle  + 1;
            r = start;
        }
    }
    return r;
}

//[1,3,5,6] 7
int main(int argc, char const *argv[])
{
    int * arr[] = {1,3,5,6};
    printf("result %d \n", searchInsert(&arr,4,7));
    return 0;
}
