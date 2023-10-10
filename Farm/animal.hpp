#ifndef ANIMAL
#define ANIMAL

class Animal {
    public:
        Animal() = default;
        virtual ~Animal() = default;
        Animal(const Animal&) = delete;
        Animal& operator=(const Animal&) = delete;
        Animal(Animal&&) = delete;
        Animal& operator=(Animal&&) = delete;

        virtual void makeNoise() const = 0;
};

#endif
