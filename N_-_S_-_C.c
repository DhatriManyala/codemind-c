#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    c=a+1;
    for(c;c<b;c++)
    {
        printf("%d %d %d
",c,c*c,c*c*c);
    }
}