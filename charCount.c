#include<stdio.h>

/**
input: aaaaabbccAaaaa
output: 5a2b2c1A4a
**/

int main()
{
    char str[1000];
    scanf("%s", str);
    int i = 0, count = 1;
    while(str[i])
    {
        while(str[i] == str[i+1])
        {
            count++;
            i++;
        }
        printf("%d%c",count,str[i]);
        count = 1;
        i++;
    }
    return 0;
}
