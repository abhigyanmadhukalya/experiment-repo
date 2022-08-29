#include <stdio.h>

int main() {

  // Creates a grid
  // \n and \t are escape sequences
  printf("1\t2\t3\n4\t5\t6\n7\t8\t9\n");

  /*
    Variables are allocated space in the memory to store values.
   */

  int x;       // declaration
  x = 123;     // initialisation
  int y = 456; // declaration and initialisation in the same line

  int age = 18;     // Integer
  char grade = 'A'; // Single Character
  char name[] =
      "Abhigyan";  // Text (basically a very jank group of chars in an array)
  float gpa = 9.8; // Floating point decimal

  // Using variables using format specifiers
  printf("Hello %s.\n", name);
  printf("You are %d years old.\n", age);
  printf("Your average grade is %c.\n", grade);
  printf("Your GPA is %f.\n", gpa);

  return 0;
}
