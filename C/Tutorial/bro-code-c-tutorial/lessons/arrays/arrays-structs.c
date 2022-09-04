#include <stdio.h>
#include <string.h>

typedef struct
{
  char name[12];
  float gpa;
} Student;

int main()
{

  Student student1 = {"Abhigyan", 4.9};
  Student student2 = {"Alex", 3.9};
  Student student3 = {"Patty", 4.2};
  Student student4 = {"Brody", 3.8};

  // Array of Structs
  Student students[] = {student1, student2, student3, student4};

  for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
  {
    printf("Student Name - %s, GPA - %.1f\n", students[i].name,
           students[i].gpa);
  }

  return 0;
}
