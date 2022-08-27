#include <stdio.h>
#include <stdlib.h>

int main() {

  int age;
  double gpa;
  char name[20];

  printf("Enter your age: ");
  scanf("%d", &age);
  printf("Your are %d years old\n", age);

  printf("Now, enter your GPA: ");
  scanf("%lf", &gpa);
  printf("Your GPA is %f\n", gpa);

  printf("Enter your name: ");
  scanf("%s", name);
  printf("Your name is %s\n", name);

  return 0;
}
