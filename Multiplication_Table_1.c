#include<stdio.h>
int main()
{
    int i,k,n;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        k=i*n;
         printf("%d x %d = %d
",n,i,k);
    }
}