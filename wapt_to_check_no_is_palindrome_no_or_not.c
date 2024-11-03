#include<stdio.h>
void main()
{
    int rev,n,m;
    printf("enter the no you want to find the reverse of :");
    scanf("%d",&n);
    m=n;
    for(rev=0,n;n>0;n=n/10)
    {
        rev=rev*10+n%10; 
    } 
    if(rev==m)
        printf("%d is palindrome no...!!",rev);
    else
        printf("%d is not a palindrome no and it's rev is %d",m,rev);
    }