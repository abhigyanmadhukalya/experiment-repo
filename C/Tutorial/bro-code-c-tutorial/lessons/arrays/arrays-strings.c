#include <stdio.h>
#include <string.h>

int main() {

  // 2D array as strings are an array of characters
  char chars[][10] = {"Mustang", "Camero", "Corvette"};

  // Assigning a new value
  strcpy(chars[0], "Tesla");

  // Printing an array of strings
  for (int i = 0; i < sizeof(chars) / sizeof(chars[0]); i++) {
    printf("%s\n", chars[i]);
  }

  return 0;
}
