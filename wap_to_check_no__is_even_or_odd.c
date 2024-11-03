#include<stdio.h>
int main()
{
    int a;
    printf("\n enter the no: ");
    scanf("%d",&a);
    if (a%2==0)
        printf("\n no %d is even ",a);
    else
    printf ("\nno %d is odd",a);
    return 0;

}