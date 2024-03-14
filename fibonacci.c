#include<stdio.h>
int main()
{
    int f3,a,i,f1=0,f2=1,c=2;
    scanf("%d",&a);
    printf("%d %d",f1,f2);
    while(c<a)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        printf(" %d",f3);
        c+=1;
    }
}