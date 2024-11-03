#include<stdio.h>
void main()
{
    int i,j,blanks,n;
    printf("enter the no of rows:");
    scanf("%d",&n);
    i=n;
    while(i>0)
    {
        blanks=1;
        while(blanks<=n-i)
        {
            printf(" ");
            blanks=blanks+1;
        } j=1;
        while(j<=2*i-1)
        {
            printf("*");
            j=j+1;
        }
        printf("\n");
        i=i-1;
    }
}