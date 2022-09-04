#include <stdio.h>

int main()
{

  char operator;
  double num1;
  double num2;
  double result;

  printf("\nEnter an Operator(+, -, *, /): ");
  scanf("%c", &operator);

  printf("\nEnter the first number: ");
  scanf("%lf", &num1);

  printf("\nEnter the second number: ");
  scanf("%lf", &num2);

  switch (operator)
  {
  case '+':
    result = num1 + num2;
    printf("The result is %.2lf", result);
    break;
  case '-':
    result = num1 - num2;
    printf("The result is %.2lf", result);
    break;
  case '*':
    result = num1 * num2;
    printf("The result is %.21f", result);
    break;
  case '/':
    result = num1 / num2;
    printf("The result is %.2lf", result);
    break;
  default:
    printf("\n%c is not a valid operator", operator);
  }

  return 0;
}
