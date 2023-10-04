#include "library.hpp"
#include <cstdlib>

Things* createThings() {
    return (Things*)malloc(sizeof(Things));
}

void destroyThings(Things* things) {
    free(things);
}
