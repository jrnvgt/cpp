#ifndef TEST
#define TEST
#include <iostream>

class Test {
    public:
        Test() {
            int a, b, c, d, e, f, g, h, i, j;
            std::cout << counter++ << std::endl;
            Test* test = new Test();
        }
    private:
        static Ape* list;
        static int counter;
};

#endif
