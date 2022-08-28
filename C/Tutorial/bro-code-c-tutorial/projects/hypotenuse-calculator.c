#include <math.h>
#include <stdio.h>

int main() {

  double A;
  double B;
  double C;

  printf("\nEnter the length of Side A: ");
  scanf("%lf", &A);

  printf("Enter the length of Side B: ");
  scanf("%lf", &B);

  C = sqrt(A * A + B * B);
  printf("\nThe length of Side C: %lf", C);

  return 0;
}
