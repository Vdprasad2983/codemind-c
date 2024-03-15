#include<stdio.h>
int main()
{
    int n,d,rev=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}