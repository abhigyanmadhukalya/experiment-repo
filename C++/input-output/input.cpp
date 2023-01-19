#include <iostream>

int main()
{

    // Data input

    int age;
    std::string name;

    std::cout << "Hello what is your name? ";
    std::cin >> name;

    std::cout << "Hello " << name << ", how old are you currently: ";
    std::cin >> age;

    std::cout << "Can input your name and age again?" << std::endl;
    std::cin >> name >> age;

    // Data with spaces
    std::string full_name;

    std::cout << "Enter your full name and age: " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> age;

    return 0;
}