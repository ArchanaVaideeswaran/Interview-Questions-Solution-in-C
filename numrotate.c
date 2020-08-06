
#include<stdio.h>
int rotate(int num,int len){
    int p = 1;
    while(--len){
        p *= 10;
    }
    num = (num%10)*p+num/10;
    return num;
}
int main()
{
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    int len1 = (int)log10(num1)+1,len2 = (int)log10(num2)+1;
    if(len1!=len2)
    {
        printf("No");
    }
    else{
        while(len2--)
        {
            if(num1!=num2){
                num2 = rotate(num2,len1);
            }
            else{
                printf("Yes");
                return 0;
            }
        }
        printf("No");
    }
    return 0;
}
