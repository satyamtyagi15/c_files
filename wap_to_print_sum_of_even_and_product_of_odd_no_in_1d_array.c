#include<stdio.h>
void main()
{
    int a[10],i,sum=0,product=1;
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
            sum=sum+a[i];
        }
        else 
        {
            product=product*a[i];
        }
    }
    printf("sum of even no is : \n %d",sum);
     printf("\nproduct of odd no is : \n %d",product);
}
