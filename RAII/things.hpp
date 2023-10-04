#ifndef THINGS
#define THINGS
#include "library.hpp"

class ThingsRAII {
    public:
        ThingsRAII(Things* things);
        ~ThingsRAII();
    private:
        Things* things;
};

#endif
