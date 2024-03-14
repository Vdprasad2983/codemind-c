#include<stdio.h>
int main()
{
    int a,b,i,gcd;
    scanf("%d%d",&a,&b);
    int m=a>b?a:b;
    for(i=1;i<=m;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}