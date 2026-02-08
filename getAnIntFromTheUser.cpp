#include <iostream>

int getAnIntFromTheUser()
{
    std::cout << "Enter an integer: ";
    int userInt{};
    std::cin >> userInt;
    std::cout << "You entered: " << userInt << '\n';
    return userInt;
}
