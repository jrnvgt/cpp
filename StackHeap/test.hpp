#ifndef TEST
#define TEST
#include <iostream>
using namespace std;

class Test {
    public:
        Test() {
            int a, b, c, d, e, f, g, h, i, j;
            cout << counter++ << endl;
            Test* test = new Test();
        }
    private:
        static int counter;
        static Ape* list;
};

#endif
