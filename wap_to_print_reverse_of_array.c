#include<stdio.h>
void main()
{
    int a[10];
    int i ;
    printf("enter elements of your array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    } printf("\nyour reverse array is \n");
    for(i=9;i>=0;i--)
    {
        printf(" %d\t",a[i]);
    }
}