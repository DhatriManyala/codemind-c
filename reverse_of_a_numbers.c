#include<stdio.h>
int rev(int n)
{
    int r,re=0;
    while(n>0)
    {
        r=n%10;
        re=(re*10)+r;
        n=n/10;
    }
    return re;
}
int main()
{
    int n;
    scanf("%d",&n);
    int r=rev(n);
    printf("%d",r);
}