#include "reference.hpp"
#include <iostream>

int main() {
    int number = 5;

    callByReference(number);

    std::cout << "Number: " << number << std::endl;
}

void callByReference(int& parameter) {
    parameter += 10;
}
