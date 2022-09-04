#include <stdio.h>

int main()
{

  const double PI = 3.14159;
  double radius;
  double circumference;
  double area;

  printf("\nEnter radius of a circle(in cms): ");
  scanf("%lf", &radius);

  circumference = 2 * PI * radius;
  area = PI * radius * radius;

  printf("\nCircumference of your circle is: %lf cm", circumference);
  printf("\nArea of your circle is: %lf cm", area);

  return 0;
}
