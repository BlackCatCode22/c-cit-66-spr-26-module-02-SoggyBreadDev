#include <iostream>

//I coded up the assignment and submitted it before remembering that it was meant to be one file
//This is the corrected file

int getAnIntFromTheUser()
{
        std::cout << "Enter an integer: ";
        int userInt{};
        std::cin >> userInt;
        std::cout << "You entered: " << userInt << '\n';
        return userInt;
}

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

int sumTwoInts()
{
        std::cout << "Enter two integers to be summed: ";
        int a{};
        int b{};
        std::cin >> a >> b;
        std::cout << "Your sum is: " << a + b << std::endl;
        return a + b;
}

int main() {
        getAnIntFromTheUser();
        compareTwoInts();
        sumTwoInts();
}
