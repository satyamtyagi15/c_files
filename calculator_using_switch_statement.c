#include<stdio.h>
int main()
{   
  int a,b;
  char op;
  printf("enter the operator  :");
  scanf("%c",&op);
  printf("\n enter the two no :");
  scanf("%d%d",&a,&b);
  switch(op)
    {
      case '+':
        printf("\n sum is %d",a+b);
        break;
      case '-':
        printf("difference is %d",a-b);
        break;
      case '/':
        printf("devision is %d",a/b);
        break;
      case '*':
        printf("multiplication is %d",a*b);
        break;
      case '%':
        printf("remainder is %d",a%b);
        break;
      default:
        printf("invalid operator....!!");
    }
  return 0;
}