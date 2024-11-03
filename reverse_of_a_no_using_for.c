#include<stdio.h>
int main()
{
    int n,rev;
    printf("enter the no you want to find the rev of :");
    scanf("%d",&n);
    for(rev=0,n;n>0;n=n/10)
    {
        rev=rev*10+n%10;
    }printf("rev is %d",rev);
}