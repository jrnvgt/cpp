#ifndef LLAMA
#define LLAMA
#include "animal.hpp"

class Llama : public Animal {
    public:
        Llama(int milkProduced);
        void makeNoise() const override;
    private:
        int milkProduced;
};

#endif
