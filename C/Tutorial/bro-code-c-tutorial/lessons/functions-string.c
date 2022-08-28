#include <ctype.h>
#include <stdio.h>
#include <string.h>

// strlwr is not an ANSI standard function
// We have to write ourselves

char *strlwr(char *s) {
  char *tmp = s;
  for (; *tmp; ++tmp) {
    *tmp = tolower((unsigned char)*tmp);
  }
  return s;
}

char *strupr(char *s) {
  char *tmp = s;
  for (; *tmp; ++tmp) {
    *tmp = toupper((unsigned char)*tmp);
  }
  return s;
}

int main() {

  char string1[] = "Abhigyan";
  char string2[] = "Madhukalya";

  // strlwr(string1);
  // strupr(string2);
  // strcat(string1, string2);
  // strncat(string1, string2, 4);
  // strcpy(string1, string2);
  // strncpy(string1, string2, 4);

  int result;

  // result = strlen(string1);                 // Returns string lenght
  // result = strcmp(string1, string2);        // Compares characters
  // result = strncmp(string1, string2, 4);    // Compares n characters

  /*
    if (result == 0) {
    printf("\nThe strings are the same");
  } else {
    printf("\nThe strings are different");
  }
  */

  // printf("%s\n", string1);
  printf("%d", result);

  return 0;
}
