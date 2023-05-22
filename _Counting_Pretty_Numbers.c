#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int l,u,c=0,r,j;
        scanf("%d%d",&l,&u);
        for(j=l;j<=u;j++)
        {
            r=j%10;
            if(r==2||r==3||r==9)
            {
                c++;
            }
        }
        printf("%d
",c);
    }
}