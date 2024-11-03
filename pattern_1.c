#include<stdio.h>
void main()
{
    int i=1,j,n;
    printf("enter the no of rows of stars :");
    scanf("%d",&n);
    while(i<=n)
    {    
        j=1;
        while(j<=i)
        { 
            printf("*");
            j=j+1;

        }printf("\n");
        i=i+1;
    }
}
