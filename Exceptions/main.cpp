#include "calculate.hpp"
#include <exception>
#include <iostream>

int main() {
    try {
        std::cout << calculate(3, 2) << std::endl;
    }
    catch (const std::exception& exception) {
        std::cerr << exception.what() << std::endl;
    }

    try {
        std::cout << calculate(1, 0) << std::endl;
    }
    catch (const std::exception& exception) {
        std::cerr << exception.what() << std::endl;
    }

    try {
        std::cout << calculate(6, 7) << std::endl;
    }
    catch (const std::exception& exception) {
        std::cerr << exception.what() << std::endl;
    }

    try {
        std::cout << calculate(355, 113) << std::endl;
    }
    catch (const std::exception& exception) {
        std::cerr << exception.what() << std::endl;
    }
}

double calculate(double number1, double number2) {
    double* numbers = nullptr;
    double result = NULL;

    try {
        if (number2 == 0) { throw std::runtime_error("ERROR: divide by zero!"); }

        numbers = new double[1000];
        result = number1 / number2;

        delete[] numbers;
    }
    catch (const std::exception& exception) {
        delete[] numbers;
        throw;
    }

    return result;
}
