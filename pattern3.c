#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter the no of rows you want to print:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            printf("%c",64+j);
            j=j+1;
        } printf("\n");
        i= i+1;
    }

}