#include <stdio.h>
#include <string.h>

int main()
{

  /*
    While loops repeats a section of code possibly unlimited times
    WHILE some condition remains true.

    A While loop might not execute at all
  */

  char name[25];

  printf("What's your name?\n");
  fgets(name, 25, stdin);
  name[strlen(name) - 1] = '\0';

  while (strlen(name) == 0)
  {
    printf("\nYou did not enter your name.\n");
    printf("What's your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';
  }

  printf("Hello %s", name);

  return 0;
}
