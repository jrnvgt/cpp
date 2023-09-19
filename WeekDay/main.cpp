#include "week.hpp"
#include "day.hpp"
#include <iostream>

int main() {
    Week* week = new Week{ 36 };
    Day* day = new Day{ "Monday", week };

    std::cout << "It's " << day->getName() << " in week " << day->getWeek()->getNumber() << "!" << std::endl;

    delete day;
    delete week;
}
