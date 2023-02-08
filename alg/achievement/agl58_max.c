// https://leetcode.cn/problems/search-insert-position/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int lengthOfLastWord(char *s)
{
    int max = 0;
    int currentWordLen = 0;
    int len = strlen(s);
    for (size_t i = 0; i < len; i++)
    {
        char c = s[i];
        if(c == ' '){
            max = max > currentWordLen ? max : currentWordLen;
            currentWordLen = 0 ;
            continue;
        }
        currentWordLen ++ ;
    }
    max = max > currentWordLen ? max : currentWordLen;
    return max;
}

//[1,3,5,6] 7
int main(int argc, char const *argv[])
{
    char *s = "luffy is still joyboy";
    printf("result %d \n", lengthOfLastWord(s));
    return 0;
}
