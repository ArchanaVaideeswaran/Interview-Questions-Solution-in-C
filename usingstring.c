#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    strcat(str1,str1);
    int num;
    num = strstr(str1,str2);
    if(num != 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
