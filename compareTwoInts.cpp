#include <iostream>

int compareTwoInts()
{
    std::cout << "Enter two integers to be compared: ";
    int x{};
    int y{};
    std::cin >> x >> y;
    if (x > y)
        std::cout << x << " is greater than " << y << '\n';
    else
        std::cout << y << " is greater than " << x << '\n';

    return 0;
}
