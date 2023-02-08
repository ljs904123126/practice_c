#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//todo https://leetcode.cn/problems/longest-common-prefix/
char *longestCommonPrefix(char **strs, int strsSize)
{

    int pointer = 0;
    char res = "";
    while (1)
    {
        
        for (size_t i = 0; i < strsSize; i++)
        {

        }
    }

    
    return res;
}

int main(int argc, char const *argv[])
{
    char *strs[] = {"flower", "flow", "flight"};
    printf("result %c \n", longestCommonPrefix(&strs, 3));
    return 0;
}
