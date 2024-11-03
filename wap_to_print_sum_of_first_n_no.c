#include<stdio.h>
int main()
{ 
    int n,sum;
    printf("enter the no upto which you want to find sum:");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        sum=sum+n;
        n=n-1;

    } 
    printf("sum is %d",sum);

    return 0;

}