#include "say.hpp"
#include <iostream>

int main() {
    say(3);
}

void say(int number)
{
    if (number < 0) { return; }

    if ((number % 2) == 0) {
        sayEven(number);
    }
    else {
        sayOdd(number);
    }
}

void sayEven(int number) {
    std::cout << number << " is even." << std::endl;

    if (number > 0)
    {
        sayOdd(number - 1);
    }
}

void sayOdd(int number) {
    std::cout << number << " is odd." << std::endl;

    if (number > 0) {
        sayEven(number - 1);
    }
}
