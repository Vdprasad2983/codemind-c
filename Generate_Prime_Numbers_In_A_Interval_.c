#include<stdio.h>
int isprime(int n)
{
    int c=0;
    if(n==1)
        return false;
    for(int i=2;i<=(n-1);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n,m,c=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(int i=n;i<=m;i++)
    {
        if(isprime(i)==true)
            printf("%d
",i);
    }
}