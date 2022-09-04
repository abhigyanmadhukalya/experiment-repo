#include <stdio.h>

int main()
{

  /*
                      2D arrays
      An array where each element is an entire array. Useful
      if you need a matrix, grid or table of data.
  */

  int numbers[2][3] = {{1, 2, 3},
                       {4, 5, 6}}; // 2 signifies the maximum number of children
  //                                  arrays and 3 signifies the maximum number
  //                                  of elements in each array.

  int digits[3][3];

  // First child array
  digits[0][0] = 1;
  digits[0][1] = 2;
  digits[0][2] = 3;

  // Second child array
  digits[1][0] = 4;
  digits[1][1] = 5;
  digits[1][2] = 6;

  // Third child array
  digits[2][0] = 7;
  digits[2][1] = 8;
  digits[2][2] = 9;

  // Printing the elements of a 2D array in a grid
  for (int i = 0; i < sizeof(digits) / sizeof(digits[0]); i++)
  {
    for (int j = 0; j < sizeof(digits[0]) / sizeof(digits[0][0]); j++)
    {
      printf("%d ", digits[i][j]);
    }
    printf("\n");
  }

  return 0;
}
