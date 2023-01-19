#include <iostream>

int main()
{

    int number1{15};         // Decimal system
    int number2{017};        // Ocatal system
    int number3{0x0f};       // Hexadecimal system
    int number4{0b00001111}; // Binary system

    std::cout << "Hello world" << std::endl; // String

    std::cout << "Number 1 is:" << number1 << std::endl;
    std::cout << "Number 2 is:" << number2 << std::endl;
    std::cout << "Number 3 is:" << number3 << std::endl;
    std::cout << "Number 4 is:" << number4 << std::endl;

    return 0;
}