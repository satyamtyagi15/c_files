#include<stdio.h>
int main()
{
    int a,b;
    printf("enter values of a,b :");
    scanf("%d%d",&a,&b);
    printf("\n value of a before swap = %d",a);
    printf("\n valu of b before swap = %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n value of a after swap = %d",a);
    printf("\n value of b after swap = %d",b);
    return 0;
}