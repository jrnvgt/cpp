#include "numbers.hpp"
#include <iostream>

int main() {
    while (int number = read("Enter a number (0 exits): ")) {
        write(number);
    }
}

int read(const char* prompt) {
    int number = 0;

    std::cout << prompt;
    std::cin >> number;
    std::cin.get();

    return number;
}
