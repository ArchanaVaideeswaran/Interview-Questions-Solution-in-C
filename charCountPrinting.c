#include<stdio.h>
#include<math.h>
/**
Input: 4a5v1n
Output: aaaavvvvvn
*/

int main()
{
    int count=0, i = 0;
    char ch[101],c;
    scanf("%s",ch);
    while(ch[i])
    {
        sscanf(ch+i,"%d%c",&count,&c);
        i = i+(int)log10(count)+2;
        while(count--)
        {
            printf("%c",c);
        }
    }
    return 0;
}
