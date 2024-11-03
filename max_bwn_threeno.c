#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    (a>b)?(a>c?(printf("greatest value is %d",a)):printf("greatest value is %d",c)):(b>c)?(printf("greatest value is %d",b)):(printf("greatest value is %d",c));
return 0;
}