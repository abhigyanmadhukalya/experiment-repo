#include <stdio.h>

int main() {

  // + (Addition)
  // - (Substraction)
  // * (Multiplication)
  // / (Division)
  // % (Modulus/Remainder)
  // ++ (Increment)
  // -- (Decrement)

  int x = 5;
  int y = 2;

  int a = x + y;
  int b = x - y;
  int c = x * y;
  float d = x / (float)y; // This is a float as int cannot store decimals
                          // (float) makes 'y' a float or else proper decimal
                          // division will not take place
  int e = x % y;          // Remainder of x / y
  x++;                    // Incrementing x by 1
  y--;                    // Decrementing y by 1

  // Augmented Assignment Operators --> used to replace a statement where an
  //                                    operator takes a variable as one of
  //                                    it's arguments and then assigns the
  //                                    result back to the same variable
  //
  //                                    x = x + 1
  //                                    x += 1

  int f = 10;
  // x = x + 2;
  f += 2;
  f -= 4;

  return 0;
}
