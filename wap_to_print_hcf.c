#include<stdio.h>
void main()
{
    int a,b,i,hcf;
    printf("enter the value of a and b :\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=a||i<=b;i++)
        {
            if(a%i==0&&b%i==0)
                {hcf=i;}
        }
        printf("\n%d is a highest common factor",hcf);
}