#include "alpaca.hpp"
#include <iostream>

Alpaca::Alpaca(bool needsShave) : needsShave{needsShave} {}

void Alpaca::makeNoise() const {
    std::cout << "HUEEEWM, ";

    if (needsShave) {
        std::cout << "I need a shave!";
    }
    else {
        std::cout << "I'm cold!";
    }

    std::cout << std::endl;
}
