#include <math.h>
#include <stdio.h>

int main() {

  double A = sqrt(9);
  double B = pow(4, 8);
  int C = round(3.14);
  int D = ceil(3.14);
  int E = floor(3.14);
  double F = fabs(-100);
  double G = log(3);  // By default, base is take as 'e'
  double H = sin(45); // Other Trigonometric functions
  double I = cos(45); // are in C language as well,
  double J = tan(45); // like cot, sec, cosec etc

  printf("%lf\n", A);
  printf("%lf\n", B);
  printf("%d\n", C);
  printf("%d\n", D);
  printf("%d\n", E);
  printf("%lf\n", F);
  printf("%lf\n", G);
  printf("%lf\n", H);
  printf("%lf\n", I);
  printf("%lf\n", J);

  return 0;
}
