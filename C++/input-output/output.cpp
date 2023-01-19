#include <iostream>

int main()
{
    // Printing to console
    std::cout << "This is printing to console" << std::endl;

    // Error
    std::cerr << "std::cerr output: Something went wrong" << std::endl;

    // Logging
    std::clog << "std::clog message: This is a log message" << std::endl;

    return 0;
}