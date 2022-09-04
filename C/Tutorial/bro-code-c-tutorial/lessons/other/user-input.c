#include <stdio.h>
#include <string.h>

int main()
{

  char name[20];

  printf("What is your name?\nPlease enter it here: ");
  // scanf("%s", name);
  fgets(name, 20, stdin);
  name[strlen(name) - 1] = '\0'; // This line removes the \n
  //                                   at the end of the line
  //                                   and prevents the output
  //                                   from showing in two
  //                                   different lines
  printf("Your name is: %s", name);

  return 0;
}
