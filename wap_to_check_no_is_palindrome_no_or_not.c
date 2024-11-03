#include<stdio.h>
int main()
{
    int rev,n,m;
    printf("enter the no :");
    scanf("%d",&n);
    m=n;
    rev=0;
    while(n>0)
    {
        rev=rev*10+n%10;
        n=n/10;
    } 
    if(rev==m)
    printf("%d is a palindrome no",rev);
    else 
    printf("%d no is not a palindrome no and reverse of a no is %d",m,rev);
    return 0;
}