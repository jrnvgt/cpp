#include "name.hpp"
#include <iostream>

int main() {
    char* name = getName();

    for (int i = 0; i < 6; ++i) {
        std::cout << name[i];
    }

    std::cout << std::endl;

    delete[] name;
}

char* getName() {
    char name[6] = { 'J', 'e', 'r', 'o', 'e', 'n' };
    int length = sizeof(name) / sizeof(char);

    char* result = new char[length];

    for (int i = 0; i < length; ++i) {
        result[i] = name[i];
    }

    return result;
}
