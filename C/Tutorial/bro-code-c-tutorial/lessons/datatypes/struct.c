#include <stdio.h>
#include <string.h>

struct Player {

  char name[12];
  int score;
};

int main() {

  // Struct --> collection of related members ("variables")
  //            They can be of diff. data types
  //            listed under one name in a block of memory
  //            VERY SIMILAR to 'class' in other langs. (but no methods)

  struct Player player1;
  struct Player player2;

  strcpy(player1.name, "Abhigyan"); // Strings cannot be modified directly
  player1.score = 7;                // Integers can be modified directly

  strcpy(player2.name, "Computer");
  player2.score = 6;

  printf("The winner is %s with score %d points\n", player1.name,
         player1.score);
  printf("The loser is %s with score %d points", player2.name, player2.score);

  return 0;
}
