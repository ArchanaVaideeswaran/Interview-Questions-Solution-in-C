#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int a = 0, b = 1, c;
    if(num <= 0)
    {
        printf("0");
        return 0;
    }
    for(int i = 0; i < num; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}
