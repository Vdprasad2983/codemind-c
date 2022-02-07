#include<stdio.h>
int main()
{
    int n,sum=0,product=1,rem=0,num;
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    printf("%d",product-sum);
    return 0;
}