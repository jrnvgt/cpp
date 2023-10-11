#include "observable.hpp"
#include <iostream>

int main() {
    Observable observable{ 10 };
    observable.addObserver([](int value) { std::cout << "Got: " << value << std::endl; });

    observable.setValue(11);
    observable.addObserver([](int value) { std::cout << "It changed to: " << value << std::endl; });
    
    observable.setValue(12);
}
