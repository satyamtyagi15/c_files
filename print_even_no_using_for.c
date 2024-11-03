#include<stdio.h>
void main()
{
    int n,i;
    printf("enter the no upto which you want to print the even or odd no :");
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        if (i%2==0)
        printf("\n%d",i);
        
    }
}