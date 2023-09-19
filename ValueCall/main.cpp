#include "value.hpp"
#include <iostream>

int main() {
    int number = 5;

    callByValue(number);

    std::cout << "Number: " << number << std::endl;
}

void callByValue(int parameter) {
    parameter += 10;
}
