// https://leetcode.cn/problems/search-insert-position/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lengthOfLastWord(char *s)
{
    int currentWordLen = 0;
    int len = strlen(s);
    for (size_t i = len; i > 0 ; i--)
    {
        char c = s[i-1];
        if(c == ' ' && currentWordLen > 0){
            break;
        }
        if(c == ' '){
            continue;
        }
        currentWordLen ++;
    }
   
    return currentWordLen;
}

int main(int argc, char const *argv[])
{
    char *s = "a";
    printf("result %d \n", lengthOfLastWord(s));
    return 0;
}
