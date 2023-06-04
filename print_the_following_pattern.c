#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=(n-1);i++)
    {
        for(j=1;j<=i;j++)
         {
             if(j==i||j==1)
             printf("*");
             else
             printf(" ");
         }
        printf("
"); 
    }
        for(int k=1;k<=n;k++){
            printf("*");
        }
}