#ifndef VECTOR
#define VECTOR

class Vector {
    public:
        Vector(size_t capacity);
        ~Vector();
        Vector(const Vector& source);
        Vector& operator=(const Vector& source);
        Vector(Vector&& source) noexcept;
        Vector& operator=(Vector&& source) noexcept;

        size_t getCapacity() const;
        size_t getSize() const;
        int getIndex(size_t index) const;
        void pushBack(int value);
    private:
        int* array;
        size_t capacity;
        size_t used;
};

void describe(const Vector& vector);

#endif
