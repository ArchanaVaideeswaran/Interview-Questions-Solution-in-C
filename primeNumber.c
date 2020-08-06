#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
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
    printf(flag == 0 ? "Prime" : "Not Prime");
    return 0;
}
