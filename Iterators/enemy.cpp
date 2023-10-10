#include "enemy.hpp"

Enemy::Enemy(const char* name, int healthPoints) : name{ name }, healthPoints{ healthPoints } {}

const char* Enemy::getName() const {
    return name;
}

int Enemy::getHealthPoints() const {
    return healthPoints;
}
