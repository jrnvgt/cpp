#include "farm.hpp"
#include "llama.hpp"
#include "alpaca.hpp"
#include <memory>
#include <utility>

void Farm::addLlama(std::unique_ptr<Llama> pointer) {
    animals.push_back(std::move(pointer));
}

void Farm::addAlpaca(std::unique_ptr<Alpaca> pointer) {
    animals.push_back(std::move(pointer));
}

void Farm::inspect() const {
    for (auto i = animals.begin(); i != animals.end(); ++i) {
        (*i)->makeNoise();
    }
}

void Farm::reverseInspect() const {
    for (auto i = animals.rbegin(); i != animals.rend(); ++i) {
        (*i)->makeNoise();
    }
}
