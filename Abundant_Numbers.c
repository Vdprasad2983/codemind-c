#include<stdio.h>
int factors_sum(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    return sum;
}
int main()
{
    int n,factors;
    scanf("%d",&n);
    factors=factors_sum(n);
    if(factors>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}