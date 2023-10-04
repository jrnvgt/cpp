#ifndef VECTOR
#define VECTOR
#include <cstddef>

class Vector {
    public:
        Vector(std::size_t capacity);
        ~Vector();
        Vector(const Vector& source);
        Vector& operator=(const Vector& source);
        Vector(Vector&& source) noexcept;
        Vector& operator=(Vector&& source) noexcept;

        std::size_t getCapacity() const;
        std::size_t getSize() const;
        int getIndex(std::size_t index) const;
        void pushBack(int value);
    private:
        int* array;
        std::size_t capacity;
        std::size_t used;
};

void describe(const Vector& vector);

#endif
