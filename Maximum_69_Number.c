#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r,flag=0,sum=0;
    scanf("%d",&n);
    d=(int)log10(n);
    while(n>0)
    {
        r=n/(int)ceil(pow(10,d));
        if(r==6 && flag==0)
        {
            sum=sum*10+9;
            flag=1;
        }
        else
        sum=sum*10+r;
        n=n%(int)ceil(pow(10,d));
        d--;
    }
    printf("%d",sum);
    return 0;
}