#include <stdio.h>

void printAge(int *pAge);

int main() {

  // Pointers --> a "variable-like" reference that holds a memory address to
  //              another variable, array etc.
  //              Some tasks are performed more easily with pointers.
  //              * --> indirection operator (value at address)

  int age = 21;
  int *pAge = NULL; // good practice to assign NULL if declaring a pointer
  pAge = &age;      // Referncing

  // Memory Address
  printf("Address of Pointer pAge: %p\n", pAge);
  printf("Address of age: %p\n", &age);

  // Size of Pointer
  printf("Size of age: %d byte(s)\n", sizeof(age));
  printf("Size of pAge: %d byte(s)\n", sizeof(pAge));

  // Value of Pointer
  printf("Value of age: %d\n", age);
  printf("Value of stored address: %d\n", *pAge); // Dereferncing

  // Using pointers as arguments in functions
  printAge(pAge);

  return 0;
}

// Using pointers as parameters in functions
void printAge(int *pAge) { printf("You are %d years old.", *pAge); }
