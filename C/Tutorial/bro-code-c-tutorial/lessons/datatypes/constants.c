#include <stdio.h>

int main()
{

  // Constants are fixed value which cannot be changed by the program during
  // execution

  const float PRICE_OF_RICE = 100;
  printf("Cost of Rice: $%f", PRICE_OF_RICE);

  // PRICE_OF_RICE = 200;
  // The above expression cannot take place because PRICE_OF_RICE is constant.

  return 0;
}
