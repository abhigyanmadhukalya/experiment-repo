#include <ctype.h>
#include <stdio.h>

int main() {

  char questions[][100] = {"1. What did the C language debut?: ",
                           "2. Who is credited with creating C?: ",
                           "3. What is the predecessor of C?: "};

  char options[][100] = {// Question 1
                         "A. 1969", "B. 1972", "C. 1999", "D. 1975",
                         // Question 2
                         "A. Dennis Ritchie", "B. Nikola Tesla",
                         "C. Lady Lovelace", "D. Doc Brown",
                         // Question 3
                         "A. Objective C", "B. C++", "C. B", "D. C#"};

  char answers[3] = {'B', 'A', 'C'};

  int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
  char guess;
  int score;

  printf("Quiz Game\n");

  for (int i = 0; i < numberOfQuestions; i++) {
    printf("*****************************\n");
    printf("%s\n", questions[i]);
    printf("*****************************\n");

    for (int j = (i * 4); j < (i * 4) + 4; j++) {
      printf("%s\n", options[j]);
    }

    printf("Your Answer: ");
    scanf(" %c", &guess);

    guess = toupper(guess);

    if (guess == answers[i]) {
      printf("Correct\n");
      score++;
    } else {
      printf("Incorrect\n");
    }
  }

  printf("Final Score: %d/%d", score, numberOfQuestions);

  return 0;
}
