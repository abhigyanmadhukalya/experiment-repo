#include <stdio.h>

int main() {

  FILE *pF = NULL;
  pF = fopen("./poem.txt", "r");
  char buffer[255];

  if (pF == NULL) {
    printf("File doesn't exist");
  } else {
    printf("***************************\n");
    while (fgets(buffer, 255, pF) != NULL) {
      printf("%s", buffer);
    }
    printf("***************************\n");
  }

  fclose(pF);

  return 0;
}
