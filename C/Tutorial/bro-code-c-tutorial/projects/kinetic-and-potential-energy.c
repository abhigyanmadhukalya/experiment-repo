#include <stdio.h>

int main()
{

  double mass;
  double velocity;
  double kinetic_energy;
  double potential_energy;
  double height;
  char energy;
  const double G = 9.8;

  printf(
      "Do you want to calculate Potential Energy(P) or Kinectic Energy(K): ");
  scanf("%c", &energy);

  switch (energy)
  {
  case 'K':
    printf("Mass of the given body(in kg): ");
    scanf("%lf", &mass);

    printf("Velocity of the given body(in m/s): ");
    scanf("%lf", &velocity);

    kinetic_energy = mass * velocity / 2;
    printf("\nThe Kinectic Energy of the given body is: %lfJ", kinetic_energy);
    break;
  case 'P':
    printf("Mass of the given body: ");
    scanf("%lf", &mass);

    printf("Height: ");
    scanf("%lf", &height);

    potential_energy = mass * height * G;
    printf("\nThe Potential Energy of the given body is: %lfJ",
           potential_energy);
    break;
  default:
    printf("%c is not a valid response", &energy);
  }

  return 0;
}
