#include<stdio.h>
#include<conio.h>
void main()
{
    int a[11],i;
    for (i=0;i<10;i++)
{    printf("enter the element ");
    scanf("%d",&a[i]);
}
printf("your first array is \n");
for(i=0;i<10;i++)
{
    printf("%d\t",a[i]);
} 
printf("\nsum of all elements of 1d array is\n ");
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum = sum +a[i];
    } printf("%d",sum);
    
}