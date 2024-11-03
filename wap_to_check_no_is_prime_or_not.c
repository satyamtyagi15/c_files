#include<stdio.h>
void main()
{
    int i,n,count;
    printf("enter the no you want to check prime or not :");
    scanf("%d",&n);
    count=0;
    for(i=1;i<=n;i++)
    {
       if(n%i==0)
         count=count+1;
    } 
    if (count==2)
        printf("%d is a prime no",n);
    else
        printf("%d is not a prime no ",n);
        

}