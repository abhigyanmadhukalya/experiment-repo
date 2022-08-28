#include <ctype.h>
#include <stdio.h>

int main() {

  char unit;
  float temp;

  printf("\nIs the temperature in Fahrenheit(F) / Celsius(C) / Kelvin(K): ");
  scanf("%c", &unit);

  unit = toupper(unit);

  switch (unit) {
  case 'C':
    printf("\nEnter temperature in Celsius(C): ");
    scanf("%f", &temp);
    printf("\nIn what unit do you want the temperature in, Fahrenheit(F) or "
           "Kelvin(K): ");
    scanf(" %c", &unit);
    if (unit == 'F') {
      temp = (temp * 9 / 5) + 32;
      printf("\nThe temperature in Fahrenheit(F) is %.1f.", temp);
    } else {
      temp = temp + 273.15;
      printf("\nThe temperature in Kelvin(K) is %.1f.", temp);
    }
    break;

  case 'F':
    printf("\nEnter temperature in Fahrenheit(F): ");
    scanf("%f", &temp);
    printf("\nIn what unit do you want the temperature in, Celsius(C) or "
           "Kelvin(K): ");
    scanf(" %c", &unit);
    if (unit == 'C') {
      temp = (temp - 32) * 5 / 9;
      printf("\nThe temperature in Celsius(C) is %.1f.", temp);
    } else {
      temp = (temp - 32) * 5 / 9 + 273.15;
      printf("\nThe temperature in Kelvin(K) is %.1f.", temp);
    }
    break;

  case 'K':
    printf("\nEnter the temperature in Kelvin(K): ");
    scanf("%f", &temp);
    printf("\nIn what unit do you want the temperature in, Fahrenheit(F) or "
           "Celsius(C): ");
    scanf(" %c", &unit);
    if (unit == 'C') {
      temp = temp - 273.15;
      printf("\nThe temperature in Celsius(C) is %.1f.", temp);
    } else if (unit == 'F') {
      temp = (temp + 459.67) * 5 / 9;
      printf("\nThe temperature in Fahrenheit(F) is %.1f.", temp);
    } else {
      printf("%c is not unit of measurement of temperature", unit);
    }
    break;

  default:
    printf("\n%c is not a valid unit of measurement", unit);
  }

  return 0;
}
