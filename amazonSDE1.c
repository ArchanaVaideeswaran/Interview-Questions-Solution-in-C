#include<stdio.h>
//AmazeWIT
struct Result
{
    double mean;
    double median;
    int mode;
};
int maxValue(int a[], int n)
{
    int max = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i]> max)
        {
            max = a[i];
        }
    }
    return max;
}
struct Result findMeanMedianMode(int array[], int n)
{
    struct Result r;
    int temp[n];
    int sum = 0;
    int t = maxValue(array, n);
    int count[t];
    int max = 0;
    for(int i = 0; i < n; i++)
    {
        sum += array[i];
    }   
    for(int i = 0; i <= t; i++)
    {
        count[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        count[array[i]]++;
    }
    for(int i = 0; i < t; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            r.mode = i;
        }
    }
    for(int i = 1; i <= t; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    for(int i = 0; i < n; i++)
    {
        temp[count[array[i]] - 1] = array[i];
        count[array[i]]--;
    }
    for(int i = 0; i < n; i++)
    {
        printf("%d ",temp[i]);
    }
    printf("\n");
    if(n % 2 != 0)
    {
        r.median = temp[n / 2];
    }
    else
    {
        r.median = (temp[(n - 1) / 2]  + temp[n / 2]) / 2.00;
    }
    r.mean = (sum * 1.00) / (n * 1.00);
    return r;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        struct Result res = findMeanMedianMode(arr, n);
        printf("%f,%f,%d\n",res.mean,res.median,res.mode);
    }
    return 0;
}