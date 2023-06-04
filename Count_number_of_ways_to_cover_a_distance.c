#include<stdio.h>
int n(int num)
{
    if(num==0)
    {
        return 0;
    }
    if(num==1)
    {
        return 1;
    }
    if(num==2)
    {
        return 2;
    }
    if(num==3)
    {
        return 4;
    }
    return n(num-1)+n(num-2)+n(num-3);
    
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",n(a));
}