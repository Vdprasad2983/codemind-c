#include<stdio.h>

int sum_of_divisors(int n)
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
    int a,b;
    scanf("%d%d",&a,&b);
    int x=sum_of_divisors(a);
    int y=sum_of_divisors(b);
    if((x==b) and (y==a))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}