#include "things.hpp"

ThingsRAII::ThingsRAII(Things* things) : things{ things } {}

ThingsRAII::~ThingsRAII() {
    destroyThings(things);
}
