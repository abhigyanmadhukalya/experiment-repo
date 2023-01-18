#include <iostream>

int main()
{

    int firstNumber = 12;
    int secondNumber = 14;

    int sum = addNumbers(firstNumber, secondNumber); // This is the function being used inside the main function

    std::cout << "The sum of numbers is: " << sum << std::endl;
    std::cout << "The sum of numbers is: " << addNumbers(47, 19) << std::endl;

    return 0;
}

int addNumbers(int firstNumber, int secondNumber) // This is a function
{
    int sum = firstNumber + secondNumber;
    return sum;
}