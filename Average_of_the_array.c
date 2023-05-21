#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
    }
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    float avg;
    avg=sum/n;
    printf("%0.2f",avg);
}