#include "function.hpp"
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers{ 1, 2, 3, 4, 5, 6, 7, 8 };

    std::vector<int> twice{ Function::map<int, int>(numbers, [](int element) { return element * 2; }) };
    showVector(twice);

    std::vector<int> odd{ Function::filter<int>(numbers, [](int element) { return element % 2 != 0; }) };
    showVector(odd);

    std::cout << Function::reduce<int, int>(numbers, 0, [](int element, int accumulator) { return element + accumulator; }) << std::endl;
}

void showVector(const std::vector<int>& vector) {
    for (int i : vector) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}
