#include<stdio.h>
int main()
{
    int num,n,count;
    scanf("%d",&n);
    int flag = 0;
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
    printf("%d",num-1);
    return 0;
}
