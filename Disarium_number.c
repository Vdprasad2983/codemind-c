#include<stdio.h>
#include<math.h>
int count(int n)
{
    int c=0,d;
    while(n!=0)
    {
        d=n%10;
        c+=1;
        n/=10;
    }
    return c;
}
int main()
{
    int n,d,sum=0;
    scanf("%d",&n);
    int temp=n;
    int length=count(n);
    while(n!=0)
    {
        d=n%10;
        n/=10;
        sum+=pow(d,length);
        length-=1;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}