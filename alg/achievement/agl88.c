// https://leetcode.cn/problems/merge-sorted-array/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{

    int p1 = m - 1;
    int p2 = n - 1;
    if (m == 0 && n > 0)
    {
        for (size_t i = 0; i < n; i++)
        {
            nums1[i] = nums2[i];
        }
        return;
    }
    else if (m > 0 && n == 0)
    {
        return;
    }
    else if (m == 0 && n == 0)
    {
        return;
    }

    int end = m + n - 1;
    while (p1 >= 0 || p2 >= 0)
    {
        if (p2 < 0)
        {
            nums1[end] = nums1[p1];
            p1--;
        }
        else if (p1 < 0)
        {
            nums1[end] = nums2[p2];
            p2--;
        }
        else if (nums1[p1] > nums2[p2])
        {
            nums1[end] = nums1[p1];
            p1--;
        }
        else
        {
            nums1[end] = nums2[p2];
            p2--;
        }
        end--;
    }
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
