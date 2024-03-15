#include<stdio.h>
int reverse(int n)
{
    int temp=n,d,rev=0;
    while(n!=0)
    {
        d=n%10;
        rev=rev*10+d;
        n/=10;
    }
    return rev;
}
int main()
{
    int n,square,reverse_square,rever,x;
    scanf("%d",&n);
    square=n*n;
    rever=reverse(n);
    reverse_square=rever*rever;
    x=reverse(reverse_square);
    if(x==square)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}