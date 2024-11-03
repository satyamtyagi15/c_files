#include<stdio.h>
int main()
{
    int a,b,c;
    printf("ente value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
   ((a>b)&&(a>c))?printf("a is greatest%d",a):(b>c)?printf("greatest is %d",b):printf("greatest is %d",c);
    return 0;
}