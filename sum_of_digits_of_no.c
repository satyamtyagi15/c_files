#include<stdio.h>
int main()
{
    int sum,n;
    printf("enter the digits you want to find the sum of :");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        sum=sum+n%10;
        n=n/10;

    } printf("sum of digits is %d",sum);
    return 0;
}