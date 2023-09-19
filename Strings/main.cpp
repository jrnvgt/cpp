#include "length.hpp"
#include <iostream>

int main() {
    char word[] = "Llama";

    std::cout << stringLength(word) << std::endl;;

    notSafe();
}

int stringLength(char* word) {
    int result = 0;

    while (*word) {
        result++;
        word++;
    }

    return result;
}

void notSafe() {
    char lowercase[17];
    char uppercase[17];

    for (int i = 0; i < 16; i++) {
        lowercase[i] = 'l' + i;
    }

    for (int i = 0; i < 16; i++) {
        uppercase[i] = 'U' + i;
    }

    lowercase[16] = 0;
    uppercase[16] = 0;

    std::cout << stringLength(lowercase) << std::endl;
    std::cout << stringLength(uppercase) << std::endl;
}
