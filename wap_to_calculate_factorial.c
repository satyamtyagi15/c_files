#include<stdio.h>
int main()
{
    int n,fact;
    printf("enter the no you want to find the factorial of :");
    scanf("%d",&n);
    fact=1;
    while(n>0)
    {
        fact=fact*n;
        n=n-1;

    } printf("factorial is %d",fact);
    return 0;
}