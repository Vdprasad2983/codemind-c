#include<stdio.h>
int main()
{
    int f3,c=0,a,i,f1=0,f2=1;
    scanf("%d",&a);
    f3=f1+f2;
    while(f3<a)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        
    }
    if(a==f3)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}