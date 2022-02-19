#include<stdio.h>
int main()
{
    int n,sum=0,rem=0,num;
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(num%sum == 0)
    printf("True");
    else
    printf("False");
    return 0;
}