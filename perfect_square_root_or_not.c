#include<stdio.h>
int square(int n)
{
    int i=1;
    while(i<(n/3))
    {
        if(i*i==n)
        {
            return 1;
        }
        i++;
    }
    return 0;
}
int main()
{
    int n,i=1;
    scanf("%d",&n);
    if(square(n)==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}