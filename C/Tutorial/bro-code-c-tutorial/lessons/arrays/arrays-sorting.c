#include <stdio.h>

// Function Prototypes
void sort(int array[], int size);
void printArray(int array[], int size);

int main() {

  int array[] = {9, 7, 2, 4, 6, 5, 1, 3, 8};
  int size = sizeof(array) / sizeof(array[0]);

  sort(array, size);
  printArray(array, size);

  return 0;
}

// Sorting Function
void sort(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

// Printing sorted items Function
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++) {
    printf("%d ", array[i]);
  }
}
