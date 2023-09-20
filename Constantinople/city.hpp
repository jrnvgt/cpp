#ifndef CITY
#define CITY
#include <string>

class City {
    public:
        City(const std::string& name, int population) : name{ name }, population{ population } {}

        const std::string& getName() const;
        void setName(const std::string& name);

        int getPopulation() const;
        void setPopulation(int population);
    private:
        std::string name;
        int population;
};

int getPopulationDifference(const City& city, const City& otherCity);

#endif
