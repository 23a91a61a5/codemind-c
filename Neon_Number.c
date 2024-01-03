#include<stdio.h>
int main()
{
    int n,r,p,dc=0;
    scanf("%d",&n);
    p=n*n;
    while(p!=0)
    {
        r=p%10;
        dc=dc+r;
        p=p/10;
    }
    if(dc==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}