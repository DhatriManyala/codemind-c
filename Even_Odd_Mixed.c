#include<stdio.h>
int main()
{
    int n,rem,sum=0,evenc=0,oddc=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        n=n/10;
        if(rem%2==0)evenc++;
        else oddc++;
    }
    if(evenc==0 && oddc!=0)printf("Odd");
    else if(evenc!=0 && oddc==0)printf("Even");
    else printf("Mixed");
}