#include<stdio.h>
int main()
{
    int n,l=0,d;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        l=(d>l)?d:l;
        n/=10;
    }
    printf("%d",l);
}