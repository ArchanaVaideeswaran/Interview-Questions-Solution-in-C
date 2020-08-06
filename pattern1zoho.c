#include<stdio.h>
/**
input is odd number and always >1
Input : 5
Output:

*****
 ***
  *
 ***
*****

**/

int main()
{
    int N = 81, n, i = 0, j = 0, k = 0;
    while(N >= 3)
    {
        //scanf("%d", &N);
        n = (N / 2) - 2;
        for(i = 0; i < N; i++)
        {
            if(i == 0 || i == N - 1)
            {
                for(j = 0; j < N; j++)
                {
                    printf("*");
                }
            }
            if(i > 0 && i < N / 2)
            {
                for(j = 0; j < i; j++)
                {
                    printf(" ");
                }
                for(j = 0; j < 3; j++)
                {
                    printf("*");
                    for(k = 0; k < n; k++)
                    {
                        printf(" ");
                    }
                }
                n--;
            }
            if(i == N / 2)
            {
                for(j = 0; j < i; j++)
                {
                    printf(" ");
                }
                printf("*");
            }
            if(i > N / 2 && i < N-1)
            {
                n++;
                for(j = i; j < N - 1; j++)
                {
                    printf(" ");
                }
                for(j = 0; j < 3; j++)
                {
                    printf("*");
                    for(k = 0; k < n; k++)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
        N -= 2;
    }
    return 0;
}
