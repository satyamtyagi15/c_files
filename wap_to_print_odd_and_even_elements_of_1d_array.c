#include<stdio.h>
void main()
{
    int a[10],i;
    printf("enter the elements of 1d array :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("your 1d array is \n");
    for(i=0;i<10;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n the even elements of your 1 d array is \n");
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\t",a[i]);
        }
    }
}
