#include<stdio.h>
int main()
{
    int square,sum=0,n,rem;
    scanf("%d",&n);
    square=n*n;
    while(square!=0)
    {
        rem=square%10;
        sum=sum+rem;
        square=square/10;
    }
    if(n==sum)
    printf("Neon Number");
    else
    printf("Not Neon Number");
    return 0;
}