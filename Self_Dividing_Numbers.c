#include<stdio.h>
int sd(int n)
{
    int d,c=0,c1=0,t=n;
    while(n)
    {
        d=n%10;
        n/=10;
        c++;
        if(d==0)
        {
            break;
        }
        if(t%d==0)
        {
            c1++;
        }
    }
    if(c==c1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int i,start,end;
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        if(sd(i))
        {
            printf("%d ",i);
        }
    }
}




