#include <iostream>

int largestOfThree(int x, int y, int z) {
    if (x > y && x > z)
        return x;
    else if (y > x && y > z)
            return y;
    else if (z > x && z > y)
            return z;
    else
        return 0;               //exits with 0 in case user inputs three equal numbers
    }


int main() {
    int x{};
    int y{};
    int z{};
    std::cout << "Enter three numbers: ";
    std::cin >> x >> y >> z;
    std::cout << "The largest number is: " << largestOfThree(x, y, z);

}