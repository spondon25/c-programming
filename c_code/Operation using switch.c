#include <stdio.h>
int main()
{
  char ope;
  int num1,num2;
  float result;

  printf("Enter Operator:");
  scanf("%c",&ope);

  printf("Enter two numbers for operation:");
  scanf("%d%d",&num1,&num2);


  switch(ope){
  case'+':
      result=num1+num2;
      break;

      case'-':
      result=num1-num2;
      break;

      case'*':
      result=num1*num2;
      break;

      case'/':
      result=num1/num2;
      break;

      default:
        printf("Invalid Symbol");

  }

    printf("Result is %.2f",result);

  return 0;
}
