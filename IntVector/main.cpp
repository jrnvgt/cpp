#include "vector.hpp"
#include <iostream>

int main() {
    Vector vector1{ 10 };
    vector1.pushBack(1);
    vector1.pushBack(2);

    Vector vector2 = vector1;
    Vector vector3 = std::move(vector1);

    vector3 = vector2;
    vector3 = vector3;
    vector2 = std::move(vector2);

    describe(vector3);
}

void describe(const Vector& vector) {
    std::cout << "Vector" << std::endl;
    std::cout << "Capacity: " << vector.getCapacity() << std::endl;
    std::cout << "Size: " << vector.getSize() << std::endl;

    for (size_t i = 0; i < vector.getSize(); i++) {
        std::cout << "Element " << i << ": " << vector.getIndex(i) << std::endl;
    }
}
