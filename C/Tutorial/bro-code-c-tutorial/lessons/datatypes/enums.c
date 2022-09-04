#include <stdio.h>

typedef enum
{
  Sun = 1,
  Mon = 2,
  Tue = 3,
  Wed = 4,
  Thur = 5,
  Fri = 6,
  Sat = 7
} Day;

int main()
{

  // Enums --> a user defined type of named integer identifiers
  //           helps to make a program more readable

  Day today = Sun; // Enums are treated as integers

  if (today == Sun || today == Sat)
  {
    printf("It's the weekend!");
  }
  else
  {
    printf("It's a weekday....");
  }

  return 0;
}
