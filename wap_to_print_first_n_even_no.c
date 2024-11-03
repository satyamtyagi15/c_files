#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the no upto which you want to print first n even no ");
    scanf("%d",&n);
    i=0;
    while(i<=n)
    {
        if(i%2==0)
        printf("\n%d",i);
        i=i+1;

    }
    return 0;
}