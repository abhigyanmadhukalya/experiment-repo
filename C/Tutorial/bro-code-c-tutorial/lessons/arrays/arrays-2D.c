#include <stdio.h>

int main() {

  /*
                      2D arrays
      An array where each element is an entire array. Useful
      if you need a matrix, grid or table of data.
  */

  int numbers[2][3] = {{1, 2, 3},
                       {4, 5, 6}}; // 2 signifies the maximum number of children
  //                                  arrays and 3 signifies the maximum number
  //                                  of elements in each array.

  int digits[4][4];

  // First child array
  digits[0][0] = 01;
  digits[0][1] = 02;
  digits[0][2] = 03;
  digits[0][3] = 04;

  // Second child array
  digits[1][0] = 05;
  digits[1][1] = 06;
  digits[1][2] = 07;

  // Third child array
  digits[2][1] = 10;
  digits[2][2] = 11;
  digits[2][3] = 12;

  // Fourth child array
  digits[3][0] = 13;
  digits[3][1] = 14;
  digits[3][2] = 15;
  digits[3][3] = 16;

  // Printing the elements of a 2D array in a grid
  for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++) {
    for (int j = 0; j < sizeof(digits[0]) / sizeof(digits[0][0]); j++) {
      printf("%d ", digits[i][j]);
    }
    printf("\n");
  }

  return 0;
}
