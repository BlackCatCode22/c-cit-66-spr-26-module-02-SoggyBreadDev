#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::cout << "Enter a word: \n";
    std::string word;
    std::cin >> word;

    reverse(word.begin(), word.end());
    std::cout << "Your word reversed is: " << word << std::endl;
}