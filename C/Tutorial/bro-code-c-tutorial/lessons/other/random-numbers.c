#include <stdio.h>
#include <stdlib.h> // Contains rand and srand functions
#include <time.h>   // Contains time functions

int main() {

  // Pseudo Random Numbers --> A set of values or elements that are
  //                           statistically random
  //                           (Don't use these for any sort of cryptographic
  //                           secutrity)

  srand(time(0)); // This is required to use rand() functions

  int number1 = (rand() % 20) + 1; // % (Modulus) limits the range of rand()
                                   // and +1 adds 1 to all terms
  int number2 = (rand() % 20) + 1;
  int number3 = (rand() % 20) + 1;

  printf("%d\n", number1);
  printf("%d\n", number2);
  printf("%d\n", number3);

  return 0;
}
