#include <stdbool.h>
#include <stdio.h>

int main()
{

  // ! (NOT) reverses the state of a condition (basically compliment of the
  // condition)

  bool sunny = true;

  if (!sunny)
  {
    printf("It's cloudy outside");
  }
  else
  {
    printf("It's sunny outside");
  }

  return 0;
}
