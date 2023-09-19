#include "city.hpp"
#include <iostream>

int main() {
    City* capital = new City{ "Amsterdam", 821752 };
    City* hometown = new City{ "Oss", 91451 };

    std::cout << "Name: " << capital->getName() << std::endl;
    std::cout << "Population: " << capital->getPopulation() << std::endl;
    std::cout << "Difference: " << getPopulationDifference(*capital, *hometown) << std::endl;

    std::cout << "Name: " << hometown->getName() << std::endl;
    std::cout << "Population: " << hometown->getPopulation() << std::endl;
    std::cout << "Difference: " << getPopulationDifference(*hometown, *capital) << std::endl;

    delete capital;
    delete hometown;
}

const std::string& City::getName() const {
    return name;
}

void City::setName(const std::string& name) {
    this->name = name;
}

int City::getPopulation() const {
    return population;
}

void City::setPopulation(int population) {
    this->population = population;
}

int getPopulationDifference(const City& city, const City& otherCity) {
    if (city.getPopulation() < otherCity.getPopulation()) {
        return otherCity.getPopulation() - city.getPopulation();
    }

    return city.getPopulation() - otherCity.getPopulation();
}
