#include<stdio.h>
int main()
{
int rev,n;
printf("enter the no you want to reverse :");
scanf("%d",&n);
rev=0;
while(n>0)
{
    rev=rev*10+n%10;
    n=n/10;
} printf("reverse is %d",rev); 
return 0;
}