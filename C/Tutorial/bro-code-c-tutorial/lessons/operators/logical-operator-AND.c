#include <stdbool.h>
#include <stdio.h>

int main()
{

  // && (AND) checks if two conditions are true

  float temp = 25;
  bool sunny = false;

  if (temp >= 0 && temp <= 30 && sunny == true)
  {
    printf("The weather is good");
  }
  else
  {
    printf("The weather is bad");
  }

  return 0;
}
