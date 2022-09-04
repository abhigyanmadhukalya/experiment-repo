#include <stdio.h>

int main()
{

  FILE *pF = NULL;
  pF = fopen("../../../../../test.txt", "a");

  fprintf(pF, "\nIt's not like I'll need it or anything");

  fclose(pF);

  /* if (remove("test.txt") == 0) {
    printf("The file was deleted successfully!");
  } else {
    printf("The file was not deleted :(");
  } */

  return 0;
}
