#include <iostream>

int main()
{

    // Compile time errors
    std::cout << "Hello world" << std::endl; // if missing semi-colon

    // Run time errors
    int value = 70 / 0;
    std::cout << "value : " << value << std::endl; // Will print nothing

    return 0;
}