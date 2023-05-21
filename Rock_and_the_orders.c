#include<stdio.h>
int main()
{
    int d,c,a1,a2,a3,b1,b2,b3,x,y;
    scanf("%d%d",&d,&c);
    scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&b1,&b2,&b3);
    x=a1+a2+a3;
    y=b1+b2+b3;
    if(x<150&&y<150)
    {
        printf("NO");
    }
    else if(x>=150&&y>=150)
    {
        if(x+y+2*d>x+y+c)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if(x<150&&y>=150)
    {
        if(x+y+2*d>x+y+c)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
    else if(x<150&& y>=150)
    {
        if(x+y+2*d>x+y+c)
        {
            printf("YES");
        }
         else
        {
            printf("NO");
        }
    }
    else if(x>=150&& y<150)
    {
        if(x+y+d>x+y+c)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }
}
