#ifndef FARM
#define FARM
#include "animal.hpp"
#include "llama.hpp"
#include "alpaca.hpp"
#include <memory>
#include <utility>
#include <vector>

class Farm {
    public:
        template <typename T, typename... Args> void addAnimal(Args &&... args) {
            animals.push_back(std::make_unique<T>(std::forward<Args>(args)...));
        }

        void addLlama(std::unique_ptr<Llama> pointer);
        void addAlpaca(std::unique_ptr<Alpaca> pointer);
        void inspect() const;
        void reverseInspect() const;
    private:
        std::vector<std::unique_ptr<Animal>> animals;
};

#endif
