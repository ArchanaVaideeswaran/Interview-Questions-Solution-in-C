#include<stdio.h>

///0 0 2 1 4 2 6 3 8 4 10 5 12 6 14 7 16 8.......

int main()
{
    int num;
    scanf("%d",&num);
    for(int i = 1; i <= num; i++)
        printf("%d ", i % 2 ? i - 1 : (i - 1) / 2);
    return 0;
}

