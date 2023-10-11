#ifndef ENEMY
#define ENEMY
#include <iostream>

class Enemy {
    public:
        Enemy(const char* name, int healthPoints);

        const char* getName() const;
        int getHealthPoints() const;
    private:
        const char* name;
        int healthPoints;
};

template<typename I> void showEnemies(I begin, I end) {
    while (begin != end) {
        if (begin->getHealthPoints() >= 30) {
            std::cout << begin->getName() << std::endl;
        }

        ++begin;
    }
}

#endif
