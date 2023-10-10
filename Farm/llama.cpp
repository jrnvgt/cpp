#include "llama.hpp"
#include <iostream>

Llama::Llama(int milkProduced) : milkProduced{ milkProduced } {}

void Llama::makeNoise() const {
    std::cout << "MWEEEUH, I make " << milkProduced << " liters a day." << std::endl;
}
