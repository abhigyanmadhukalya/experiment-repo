#include <stdio.h>

void birthday(char x[], int y)
{ // Here 'char name[]' and 'int age' are paraemeters that have to be fullfilled to execute the function
  printf("\nHappy birthday dear %s!", x);
  printf("\nYou are %d years old!", y);
}

int main()
{

  char name[] = "Abhigyan";
  int age = 18;
  birthday(name, age); // Here name and age are arguments to fulfill the paraemeters in the actual function

  return 0;
}
