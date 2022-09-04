#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

  const int MIN = 1;
  const int MAX = 100;

  int guess;
  int guesses;
  int answer;

  srand(time(0)); // This uses current time to generate random num

  // Generate a random num b/w MIN and MAX
  answer = (rand() % MAX) + MIN;

  do
  {
    printf("Enter a guess: ");
    scanf("%d", &guess);
    if (guess > answer)
    {
      printf("Too high\n");
    }
    else if (guess < answer)
    {
      printf("Too low\n");
    }
    else
    {
      printf("CORRECT\n");
    }
    guesses++;
  } while (guess != answer);

  printf("*******************\n");
  printf("Answer: %d\n", answer);
  printf("Guesses: %d\n", guesses);
  printf("*******************\n");

  return 0;
}
