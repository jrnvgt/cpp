#include "llama.hpp"
#include "alpaca.hpp"
#include "farm.hpp"

int main() {
    Farm farm{};
    farm.addAnimal<Llama>(10);
    farm.addAnimal<Alpaca>(false);
    farm.inspect();
}
