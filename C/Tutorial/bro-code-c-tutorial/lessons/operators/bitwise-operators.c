#include <stdio.h>

int main()
{

  // Bitwise Operators --> special operators used in bit level
  //                       programming.

  // & - AND
  // | - OR
  // ^ - XOR
  // ~ - Compliment (2s Compliment)
  // << - Left Shift
  // >> - Right Shift

  int x = 6;  // 6 -->  00000110
  int y = 12; // 12 --> 00001100
  int z = 0;  // 0 -->  00000000

  // AND
  z = x & y; // 4(z) --> 00000100
  printf("%d\n", z);

  // OR
  z = x | y; // 14(z) --> 00001110
  printf("%d\n", z);

  // XOR
  z = x ^ y; // 10(z) --> 00001010
  printf("%d\n", z);

  // Compliment
  z = ~x; // X = -00000111
  printf("%d\n", z);

  // Left Shift
  z = x << 1; // 12(x) --> 00001100
  printf("%d\n", z);

  // Right Shift
  z = y >> 1; // 6(y) = 00000110
  printf("%d\n", z);

  return 0;
}
