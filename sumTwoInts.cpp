#include <iostream>

int sumTwoInts()
{
    std::cout << "Enter two integers to be summed: ";
    int a{};
    int b{};
    std::cin >> a >> b;
    std::cout << "Your sum is: " << a + b << std::endl;
    return a + b;
}
