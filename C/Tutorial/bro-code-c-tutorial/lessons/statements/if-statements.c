#include <stdio.h>

int main()
{

  int age;

  printf("\nEnter your age: ");
  scanf("%d", &age);

  if (age >= 18)
  {
    printf("You are now signed up.");
  }
  else if (age < 0)
  {
    printf("You haven't even been born yet!");
  }
  else
  {
    printf("You are not eligible to signed up.");
  }

  return 0;
}
