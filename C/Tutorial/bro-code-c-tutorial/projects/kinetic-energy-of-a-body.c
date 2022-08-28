#include <stdio.h>

int main() {

  double mass;
  double velocity;
  double kinetic_energy;

  printf("Mass of the given body(in kg): ");
  scanf("%lf", &mass);

  printf("Velocity of the given body(in m/s): ");
  scanf("%lf", &velocity);

  kinetic_energy = mass * velocity / 2;
  printf("\nThe Kinectic Energy of the given body is: %lfJ", kinetic_energy);

  return 0;
}
