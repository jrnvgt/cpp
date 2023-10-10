#ifndef ALPACA
#define ALPACA
#include "animal.hpp"

class Alpaca : public Animal {
    public:
        Alpaca(bool needsShave);
        void makeNoise() const override;
    private:
        bool needsShave;
};

#endif
