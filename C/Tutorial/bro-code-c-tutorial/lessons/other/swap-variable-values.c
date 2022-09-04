#include <stdio.h>
#include <string.h>

int main()
{

  // Variables for switching values for characters
  char x = 'X';
  char y = 'Y';

  // Variables for switching values for strings
  char a[] = "water";
  char b[] = "lemonade";

  // Temporary variables
  char temp1;
  char temp2[15];

  // Switching values for characters
  temp1 = x;
  x = y;
  y = temp1;

  // Switching values for strings
  strcpy(temp2, a);
  strcpy(a, b);
  strcpy(b, temp2);

  // Printing switched variables
  printf("x = %c\n", x);
  printf("y = %c\n", y);

  printf("a = %s\n", a);
  printf("b = %s\n", b);

  return 0;
}
