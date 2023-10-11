#include "observable.hpp"
#include <algorithm>

Observable::Observable(int value) : value{ value } {};

void Observable::setValue(int value) {
    this->value = value;

    std::for_each(observers.begin(), observers.end(), [value](auto& observer) { observer(value); });
}
