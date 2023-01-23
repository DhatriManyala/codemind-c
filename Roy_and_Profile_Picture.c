#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b;
        scanf("%d%d",&a ,&b);
        if(a<m||b<m)
        {
            printf("UPLOAD ANOTHER
");
        }
        else
        {
            if(a==b)
            {
                printf("ACCEPTED
");
            }
            else
            {
                printf("CROP IT
");
            }
        }
    }
}