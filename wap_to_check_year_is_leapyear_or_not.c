#include<stdio.h>
int main()
{
    int year;
    printf("enter the year you want to check is a leap year or not : ");
    scanf("%d",&year);
    if(year%4==0)
      {
        if(year%100==0)
         {
            if(year%400==0)
            printf("year is a leap year");
         else 
         printf("year is not a leap year");
         }
         else printf("year is a leap year ");
      }
      else printf("year is not a leap year");
      return 0;
}