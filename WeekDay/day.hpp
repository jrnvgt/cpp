#ifndef DAY
#define DAY
#include <string>

class Day {
    public:
        Day(std::string name, Week* week) : name{ name }, week{ week } {}
        std::string& getName() { return name; }
        Week* getWeek() { return week; }
    private:
        std::string name;
        Week* week;
};

#endif
