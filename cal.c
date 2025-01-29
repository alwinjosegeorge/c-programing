#include<stdio.h>
int main(){
 int num1,num2;
 char operator;
  printf("Enter two number");
  scanf("%d%d",&num1,&num2);
  printf("Select an operation: +,-,*,/,%%    ");
  scanf(" %c",&operator);
  switch (operator){
  case '+':
    printf("addition=%d\n",num1+num2);
    break;
  case '-':
    printf("subtraction=%d\n",num1-num2);
    break;
  case '*':
    printf("multiplication=%d\n",num1*num2);
    break;
  case '/':
    printf("Division=%d\n",num1/num2);
    break;
  case '%':
    printf("Remainder=%d\n",num1 % num2);
    break;
  default:
    printf("invalid");
    break;
    };
  return 0;
}
