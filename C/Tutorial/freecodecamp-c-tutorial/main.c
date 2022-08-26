#include <stdio.h>
#include <stdlib.h>

int main() {

  char characterName[] = "Abhigyan";
  int characterAge = 17;

  printf("There once was a man named %s\n", characterName);
  printf("he was %d years old.\n", characterAge);

  characterAge = 19;

  printf("He really liked the name %s\n", characterName);
  printf("But he did not like being %d.\n", characterAge);

  return 0;
}
