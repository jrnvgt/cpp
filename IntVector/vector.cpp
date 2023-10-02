#include "vector.hpp"
#include <cstddef>
#include <utility>

Vector::Vector(std::size_t capacity) : array{ new int[capacity] }, capacity{ capacity }, used{ 0 } {}

Vector::~Vector() {
    delete[] array;
}

Vector::Vector(const Vector& source) : array{ new int[source.capacity] }, capacity{ source.capacity }, used{ source.used } {
    for (int i = 0; i < capacity; i++) {
        array[i] = source.array[i];
    }
}

Vector& Vector::operator=(const Vector& source) {
    Vector temp{ source };
    std::swap(*this, temp);

    return *this;
}

Vector::Vector(Vector&& source) noexcept : array{ source.array }, capacity{ source.capacity }, used{ source.used } {
    source.array = nullptr;
    source.capacity = 0;
    source.used = 0;
}

Vector& Vector::operator=(Vector&& source) noexcept {
    std::swap(array, source.array);
    std::swap(capacity, source.capacity);
    std::swap(used, source.used);

    return *this;
}

std::size_t Vector::getCapacity() const {
    return capacity;
}

std::size_t Vector::getSize() const {
    return used;
}

int Vector::getIndex(std::size_t index) const {
    return array[index];
}

void Vector::pushBack(int value) {
    if (used < capacity) {
        array[used] = value;
        used++;
    }
}
