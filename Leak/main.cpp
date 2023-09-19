#include "multiply.hpp"
#include <iostream>

int main() {
    int* result = multiply(2, 3);

    std::cout << "2 x 3 = " << *result << std::endl;

    delete result;
}

int* multiply(int x, int y) {
    int* result = new int;
    *result = x * y;

    return result;
}
