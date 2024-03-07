#include<stdio.h>
int main()
{
    int s=0,p=1,d,n;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        s+=d;
        p*=d;
        n/=10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}