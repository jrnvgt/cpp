#include "copy.hpp"
#include <iostream>

int main() {
    char llama[6];

    copyString((char*)"Llama", llama);

    std::cout << llama << std::endl;
}

void copyString(char* from, char* to) {
    while (*from) {
        *to = *from;
        ++from;
        ++to;
    }

    *to = 0;
}
