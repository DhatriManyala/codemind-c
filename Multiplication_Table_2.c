#include<stdio.h>
int main()
{
    int n,i,r,k;
    scanf("%d%d",&r,&n);
    for(i=1;i<=n;i++)
    {
        k=i*r;
        printf("%d x %d = %d
",r,i,k);
    }
}