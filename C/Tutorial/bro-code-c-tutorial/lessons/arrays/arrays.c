#include <stdio.h>

int main() {

  // array --> a data structure that can store many values of the SAME data type

  double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0, 30.0};

  double example[5]; // Initialising an array but not assigning values
  example[0] = 20.0; // Assigning values later on in the code

  // Printing arrays with loops
  for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
    printf("$%.2lf\n", prices[i]);
  }

  return 0;
}
