#include <stdio.h>

void hello(char x[], int y); // Function prototype

int main() {

  /*
     Function prototypes are declarations w/o a body made before main()
     Ensures calls to function are made corrrectly


                     Important Notes

    - Many C Compilers do not check for parameter matching
    - Missing arguments will result in unexpected behaviour
    - A function prototype causes the coompiler to flag an error if
      arguments are missing.

              Advantages of Function Prototype

    - Easier to navigate the program with main() at top
    - Helps with debugging
    - Commonly used in header files

   */

  char name[] = "Abhigyan";
  int age = 18;

  hello(name, age);

  return 0;
}

void hello(char x[], int y) {
  printf("\nHello %s!", x);
  printf("\nYou are %d years old!", y);
}
