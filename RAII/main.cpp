#include "library.hpp"
#include "things.hpp"
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<Things, void(*)(Things*)> things{ createThings(), destroyThings };
    things->name = "Bjarne Stroustrup";
    things->value = 42;

    std::cout << "Name: " << things->name << std::endl;
    std::cout << "Meaning of life: " << things->value << std::endl;
}
