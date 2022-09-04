#include <iostream>

int main()
{

    // integers
    int age = 21;
    int year = 2020;
    int days = 7;

    // Double (decimal number)
    double gpa = 4.9;
    double price = 9.99;
    double temp = 21.9;

    // characters
    char grade = 'A';
    char initials = 'B';
    char dollarSign = '$';

    // booleans
    bool isAlive = true;
    bool isDead = false;

    // strings (objects that represent a sequence of text)
    std::string name = "Abhigyan";
    std::string day = "Sunday";
    std::string food = "pizza";

    // Printing integers
    std::cout << "Integers" << '\n';
    std::cout << age << '\n';
    std::cout << year << '\n';
    std::cout << days << '\n'
              << std::endl;

    // Printing doubles
    std::cout << "Doubles" << '\n';
    std::cout << gpa << '\n';
    std::cout << price << '\n';
    std::cout << temp << '\n'
              << std::endl;

    // Printing characters
    std::cout << "Characters" << '\n';
    std::cout << grade << '\n';
    std::cout << initials << '\n';
    std::cout << dollarSign << '\n'
              << std::endl;

    // Printing booleans
    std::cout << "Booleans" << '\n';
    std::cout << isAlive << '\n';
    std::cout << isDead << '\n'
              << std::endl;

    // Printing Strings
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}