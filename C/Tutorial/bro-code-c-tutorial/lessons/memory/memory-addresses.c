#include <stdio.h>

int main() {

  // Memory --> an array of bytes within RAM (street)
  // Memory Block --> a single unit (byte) within memory, used
  //                  to hold some value (person)
  // Memory Address --> the address of where a memory block is
  //                    located (house address)

  char a;
  char b[1];

  printf("%d byte(s)\n", sizeof(a));
  printf("%d byte(s)\n", sizeof(b));

  printf("%p\n", &a);
  printf("%p\n", &b);

  return 0;
}
