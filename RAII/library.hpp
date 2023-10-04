#ifndef LIBRARY
#define LIBRARY

struct Things {
    const char* name;
    int value;
};

Things* createThings();
void destroyThings(Things* things);

#endif
