#include<stdio.h>
void main()
{
    int n,sum,m,r;
    printf("enter the no you want to check is a armstrong n or not");
    scanf("%d",&n);
    m=n;
    for(sum=0,n;n>0;n=n/10)
    {
        r=n%10;
        sum=sum+r*r*r;
    } 
    if(sum==m)
        printf("%d is an armstrong no",sum);
    else
        printf("%d is not an armstrong no",m);
}
