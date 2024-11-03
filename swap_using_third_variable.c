#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a,b respectively: ");
    scanf("%d%d",&a,&b);
    printf("\nVALUE OF A BEFORE SWAP =%d",a);
    printf("\nVALUE OF B BEFORE SWAP =%d",b);
    c=a;
    a=b;
    b=c;
    printf("\nvalue of a after swapping =%d",a);
    printf("\nvalue of b after swapping =%d",b);
    return 0;
}