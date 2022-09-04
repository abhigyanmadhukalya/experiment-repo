#include <stdbool.h>
#include <stdio.h>

int main()
{

  // || (OR) checks if at least one condition is true

  float temp = 25;
  bool sunny = false;

  if (temp <= 0 || temp >= 30)
  {
    printf("\nThe weather is bad!");
  }
  else
  {
    printf("The weather is good!");
  }

  return 0;
}
