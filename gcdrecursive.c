#include<stdio.h>
void main()
{
    int arr[3][2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("enter elements of ordinary matrix\n");
            scanf("%d",&arr[i][j]);
        }
    }
    printf ("your ordinary matrix is: \n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf(" %d \t ", arr[i][j]);
        } 
        printf("\n");
    }
    printf("transpose of ordinary matrix is :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf ("%d\t",arr[j][i]);
        }
    printf("\n");
    }
}