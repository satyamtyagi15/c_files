#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
   i=1;
   while(i<=4)
   {
    j=1;
    while(j<=i)
    {
        printf("*");
        j=j+1;
    }
    printf("\n");
    i+1;
   }
}