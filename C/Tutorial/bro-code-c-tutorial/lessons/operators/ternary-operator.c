#include <stdio.h>

int findMax(int x, int y) { return (x > y) ? x : y; }

int main() {

  // Ternary Operator --> shortcut to if/else statements when
  //                      assigning/returning a value
  //
  // (condition) ? <value if true> : <value if false>

  int Max = findMax(3, 4);

  printf("%d", Max);

  return 0;
}
