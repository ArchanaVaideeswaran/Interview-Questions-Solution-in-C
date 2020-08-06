#include<stdio.h>
#include <stdlib.h>
int isPrime(int n)
{
    for(int ctr = 2; ctr*ctr <= n; ctr++)
    {
        if(n % ctr == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
   int N;
   scanf("%d", &N);
   if(isPrime(N))
   {
       printf("%d", N);
       return 0;
   }
   else
   {
       int count[33] = {0}, Prime[N], max = -999, firstprime = 2, primeFact[10];
       for(int ctr = 0; ctr < N; ctr++)
       {
           if(isPrime(firstprime))
           {
               Prime[firstprime] = firstprime;
               firstprime++;
           }
           else{
               firstprime++;
           }
       }
       for(int ctr = 0; ctr < N; ctr++)
       {
           while(N > 0)
           {
               if(N % ctr == 0)
               {
                   count[ctr]++;
                   N = N / 10;
               }
           }
       }
       int pos = 0, prime;
       for(int ctr = 0; ctr < N; ctr++)
       {
           if(count[ctr] >= max)
           {
               primeFact[ctr] = ctr;
               pos++;
           }
       }
       for(int ctr = 2; ctr > pos; ctr++)
       {
           if(primeFact[ctr] > primeFact[ctr+1])
           {
               prime = primeFact[ctr];
           }
       }
       printf("%d",prime);
   }
}