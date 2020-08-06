#include<stdio.h>
int main()
{
    int arr[100];
    int n;
    scanf("%d",&n);
    for(int ind=0;ind<n;ind++)
        scanf("%d",arr+ind);
    int start=0,end = 0,i=0,sum=0,s=0;
    for(int ind=0;ind<n;ind++){
        if(arr[ind]<0){
            if(s>sum){
                sum = s;
                start = i;
                end = ind;
            }
            i = ind+1;
            s=0;
        }
        else
            s = s+arr[ind];
    }
    if(s>sum){
        sum = s;
        start = i;
        end = n;
    }
    for(int ind = start;ind<end;ind++){
        printf("%d ",ind);
    }
    printf("\n%d",sum);
}
