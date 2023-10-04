#include "string.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string text{ "The quick brown fox jumps over the lazy dog." };
    std::vector<char> buffer(1024);

    copyStringWithIndex(text, buffer);
    std::cout << buffer.data() << std::endl;

    copyStringWithPointers(text, buffer);
    std::cout << buffer.data() << std::endl;
}

void copyStringWithIndex(const std::string& text, std::vector<char>& buffer) {
    const char* source = text.c_str();
    char* destination = buffer.data();

    for (int i = 0; i < text.length(); i++) {
        destination[i] = source[i];
    }

    destination[text.length()] = 0;
}

void copyStringWithPointers(const std::string& text, std::vector<char>& buffer) {
    const char* source = text.c_str();
    char* destination = buffer.data();

    while (*source) {
        *destination = *source;
        source++;
        destination++;
    }

    *destination = 0;
}
