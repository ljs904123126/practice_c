//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPalindrome(int x)
{

    if (x < 0)
    {
        return 0;
    }
    if (x < 10)
    {
        return 1;
    }
    int hx = x;
    int nx = 0;
    while (hx > nx)
    {
        int last = hx % 10;
        if (last == 0 && nx == 0)
        {
            return 0;
        }
        hx = hx / 10;

        if (hx == 0)
        {
            return 0;
        }

        if (hx == nx)
        {
            return 1;
        }

        nx = nx * 10 + last;
        if (nx == hx)
        {
            return 1;
        }
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    printf("result %d \n", isPalindrome(2222222));
    return 0;
}
