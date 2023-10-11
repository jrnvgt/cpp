#include "lambda.hpp"
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words{ "Alfa", "Bravo", "Charlie" };

    forAll(words.begin(), words.end(), [](const std::string& word) { std::cout << word << std::endl; });
}
