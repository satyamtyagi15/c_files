#include<stdio.h>
void main()
{
    int a[10],i,count_even=0,count_odd=0;
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
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            count_even++;
        }
        else if (a[i]%2!=0)
        {
            count_odd++;
        }
    }
       printf("\ntotal no of even elements in your 1d array is : \n %d",count_even);
       
       printf("\ntotal no of odd elements in your 1d array is : \n %d",count_odd);
}
