#include<stdio.h>

///1 2 1 3 2 5 3 7 5 11 8 13 13 17 21......

int fibo(int n)
{
    if(n <=2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int prime(int n)
{
    int num,count;
    for(num = 2, count = 0; count < n; num++)
    {
        int flag = 0;
        if(num % 2 != 0)
        {
            for(int fact = 3; fact * fact <= num; fact += 2)
            {
                if(num % fact == 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
        else if(num != 2) flag = 1;
        if(flag == 0)
        {
            count++;
        }
    }
    return num-1;
}
int main()
{
    int num;
    scanf("%d",&num);
    printf("%d", num % 2 ? fibo(num / 2 + 1) : prime(num / 2));
    return 0;
}
