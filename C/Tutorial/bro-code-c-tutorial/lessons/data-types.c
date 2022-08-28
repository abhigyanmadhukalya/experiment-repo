#include <stdbool.h>
#include <stdio.h>

int main() {

  // Characters
  char a = 'C';          // single character, %c
  char b[] = "Abhigyan"; // array of character, %s
  char f = 100; // 1 byte (range from -128 to +127), %d for numeric and %c for
                // ASCII representaiton
  unsigned char g = 255; // 1 byte (range from 0 to +255), %d for numeric and %c
                         // for ASCII representaiton

  // Floating point decimals
  float c = 3.141592; // 4 bytes (32 bits of precision) 6 - 7 digits, %f
  double d =
      3.141592653589793; // 8 bytes (64 bits of precision) 15 - 16 digits, %lf

  // Boolean Values
  bool e = true; // 1 byte (True or false), %d

  // Integers
  short int h = 32767;          // 2 bytes (range from -32,768 to +32,767), %d
  unsigned short int i = 65535; // 2 bytes (range from 0 to +65,535), %d
  int j =
      2147483647; // 4 bytes (range from -2,147,483,648 to +2,147,483,647), %d
  unsigned int k = 4294967295; // 4 bytes (range from 0 to +4,294,967,295), %u

  // These will almost be never used except for certain cases
  long long int l = 9223372036854775807; // 8 bytes (range from -9 quintillion
                                         // to +9 quintillion), %lld
  unsigned long long int m =
      18446744073709551615U; // 8 bytes (range from 0 to +18 quintillion), %llu
                             // The 'U' is added to have no representaiton
                             // errors

  printf("%c\n", a);
  printf("%s\n", b);
  printf("%f\n", c);
  printf("%lf\n", d);
  printf("%d\n", e);

  printf("%d\n", f);
  printf("%c\n", f);
  printf("%d\n", g);
  printf("%c\n", g);

  printf("%d\n", h);
  printf("%d\n", i);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%d\n", j);
  printf("%u\n", k);
  printf("%lld\n", l);
  printf("%llu\n", m);

  return 0;
}
