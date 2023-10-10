#include "enemy.hpp"
#include <array>
#include <vector>

int main() {
    std::array<Enemy, 5> enemiesArray{
        Enemy{"Bandit", 10},
        Enemy{"Rover", 20},
        Enemy{"Dragon", 50},
        Enemy{"Cow", 20},
        Enemy{"Potato", 30}
    };

    std::vector<Enemy> enemiesVector;
    enemiesVector.emplace_back("Bandit", 10);
    enemiesVector.emplace_back("Rover", 20);
    enemiesVector.emplace_back("Dragon", 50);
    enemiesVector.emplace_back("Cow", 20);
    enemiesVector.emplace_back("Potato", 30);

    showEnemies(enemiesArray.cbegin(), enemiesArray.cend());
    showEnemies(enemiesVector.begin(), enemiesVector.end());
}
