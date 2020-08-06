#include<stdio.h>


int phoneCharging(int initCharge, int finalCharge)
{       
       int R = initCharge;
       int min = 0;
        if(R >= 0 && R <= 10 && R < finalCharge)
       {
           R += 10;
           min += 1;
           if(R >= finalCharge)
           {
               return min;
           }
       }
       if(R >= 11 && R <= 230 && R < finalCharge)
       {
           if(finalCharge <= 230)
           {
               int add = finalCharge - R;
               if(add % 5 == 0)
               {
                   min += add / 5;
               }
               else
               {
                   min += (add / 5) + 1;
               }
               return min;
           }
           else
           {
               int add = 230 - R;
               if(add % 5 == 0)
               {
                   R += add + 5;
                   min += add / 5;
               }
               else
               {
                   R += add + 5;
                   min += (add / 5) + 1;
               }
           }
       }
       if(R >= 231 && R <= 559 && R < finalCharge)
       {
           if(finalCharge <= 559)
           {
               int add = finalCharge - R;
               if(add % 8 == 0)
               {
                   min += add / 8;
               }
               else
               {
                   min += (add / 8) + 1;
               }
               return min;
           }
           else
           {
               int add = 559 - R;
               if(add % 8 == 0)
               {
                   R += add + 8;
                   min += add / 8;
               }
               else
               {
                   R += add + 8;
                   min += (add / 8) + 1;
               }
           }
       }
       if(R >= 560 && R <= 1009 && R < finalCharge)
       {
           if(finalCharge <= 1009)
           {
               int add = finalCharge - R;
               if(add % 2 == 0)
               {
                   min += add / 2;
               }
               else
               {
                   min += (add / 2) + 1;
               }
               return min;
           }
           else
           {
               int add = 1009 - R;
               if(add % 2 == 0)
               {
                   R += add + 2;
                   min += add / 2;
               }
               else
               {
                   R += add + 2;
                   min += (add / 2) + 1;
               }
           }
       }
       while(R >= 1010 && R <= 5000 && R < finalCharge)
       {
           if(finalCharge <= 5000)
           {
               int add = finalCharge - R;
               if(add % 7 == 0)
               {
                   min += add / 7;
               }
               else
               {
                   min += (add / 7) + 1;
               }
               return min;
           }
           else
           {
               int add = 5000 - R;
               if(add % 7 == 0)
               {
                   R += add + 7;
                   min += add / 7;
               }
               else
               {
                   R += add + 7;
                   min += (add / 7) + 1;
               }
           }
       }
       while(R >= 5001 && R <= 10000 && R < finalCharge)
       {
           if(finalCharge <= 10000)
           {
               int add = finalCharge - R;
               if(add % 8 == 0)
               {
                   min += add / 8;
               }
               else
               {
                   min += (add / 8) + 1;
               }
               return min;
           }
           else
           {
               int add = 10000 - R;
               if(add % 8 == 0)
               {
                   R += add + 8;
                   min += add / 8;
               }
               else
               {
                   R += add + 8;
                   min += (add / 8) + 1;
               }
           }
       }
       while(R >= 10001 && R <= 1000000000 && R < finalCharge)
       {
           R += 3;
           if(finalCharge <= 1000000000)
           {
               int add = finalCharge - R;
               if(add % 3 == 0)
               {
                   min += add / 3;
               }
               else
               {
                   min += (add / 3) + 1;
               }
               return min;
           }
           else
           {
               int add = 1000000000 - R;
               if(add % 3 == 0)
               {
                   R += add + 3;
                   min += add / 3;
               }
               else
               {
                   R += add + 3;
                   min += (add / 3) + 1;
               }
           }
       }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int S, T;
        scanf("%d%d", &S, &T);
        printf("%d\n",phoneCharging(S, T));
    }
    return 0;
}