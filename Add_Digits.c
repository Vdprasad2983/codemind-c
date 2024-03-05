#include<stdio.h>
int digit_sum(int n)
{
    int d,sum=0;
    while (n!=0)
    {
        d=n%10;
        sum+=d;
        n/=10;
    }
    return sum;
}
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n>9)
    {
        n=digit_sum(n);
    }
    printf("%d",n);
}