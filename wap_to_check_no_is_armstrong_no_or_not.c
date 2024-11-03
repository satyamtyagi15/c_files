#include<stdio.h>
int main()
{
    int sum,n,m,r;
    printf("enter the no to check is armstrong no or not\n");
    scanf("%d",&n);
    m=n;
    sum=0;
    while(n>0)
    {
        r=n%10;
        sum = sum+(r*r*r);
        n=n/10;
    } 
    if (m==sum)
        printf("%d  is armstrong no ",sum);
    else
        printf("%d is not an armstrong no",m);
    return 0;
}