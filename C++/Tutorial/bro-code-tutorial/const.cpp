#include <iostream>

int main()
{
    // Const --> tells compiler to prevent it from being modified

    const double PI = 3.14159;
    double radius = 21.0;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << '\n';

    return 0;
}