#include <stdio.h>

int main()
{

  /*
    While Loop --> first CHECKS condition, then executes code
    Do While Loop --> always executes a block of code once and then CHECKS
                      condition
  */

  int number = 0;
  int sum = 0;

  do
  {
    printf("Enter a number above 0: ");
    scanf("%d", &number);
    if (number > 0)
    {
      sum += number;
    }
  } while (number > 0);

  printf("Sum of Numers: %d", sum);
  return 0;
}
