#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter the elements of 2d array : \n");
            scanf("%d",&a[i][j]);
        }
    }
    printf("your 2d array is : \n")
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\n");
    printf("your left diagonal elements ara : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf ("%d\t",a[i][j]);
            }
            else 
            printf("%d\t",0);
        }printf("\n");
    }
    printf("your right diagnonal elements are : \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j==2)
            {
                printf("%d\t",a[i][j]);
            }
            else 
            printf("%d\t",0);
        } printf("\n");
    }
}