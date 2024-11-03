#include<stdio.h>
void main()
{
    int j,n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    while(n>0)
    { j=1;
    while(j<=n)
    {
        printf("%c",64+j);
        j=j+1;
    } printf("\n");
    n=n-1;

    }
    
}