#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[100001];
    scanf("%s", str);
    int ctr = 1, index = 0, len = strlen(str);
    int rptCnt[128] = {0};
    for(index = 0; index < len; index++)
    {
        ctr = index+1;
        if(str[index] != str[ctr])
        {
            printf("%c", str[index]);
            index++;
            ctr++;
        }
        while(str[index] == str[ctr])
        {
            rptCnt[str[index]]++;
            ctr++;
        }
        if(rptCnt[str[index]] > 0)
        {
            printf("%c",str[index]);
        }
        index++;
    }
}