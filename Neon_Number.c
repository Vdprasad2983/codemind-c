#include<stdio.h>
int main()
{
    int d,n,s,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s!=0)
    {
        d=s%10;
        sum+=d;
        s/=10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}