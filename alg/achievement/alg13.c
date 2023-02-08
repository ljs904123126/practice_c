#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int getVal(char c)
{
    switch (c)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    default:
        return 1000;
        break;
    }
    return -1;
}
int romanToInt(char *s)
{
    int len = strlen(s);
    int res = 0;
    for (size_t i = 0; i < len; i++)
    {
        char c = s[i];
        int cv = getVal(c);
        if (i + 1 == len)
        {
            res += cv;
            break;
        }
        int nv = getVal(s[i + 1]);
        if (nv > cv)
        {
            res -= cv;
        }
        else
        {
            res += cv;
        }

        
    }
    return res;
}

int main(int argc, char const *argv[])
{
    printf("result %d \n", romanToInt("LVIII"));
    return 0;
}
