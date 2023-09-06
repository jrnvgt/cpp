#include "main.hpp"
#include <iostream>
using namespace std;

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
    cout << number << " is even." << endl;

    if (number > 0)
    {
        sayOdd(number - 1);
    }
}

void sayOdd(int number) {
    cout << number << " is odd." << endl;

    if (number > 0) {
        sayEven(number - 1);
    }
}
