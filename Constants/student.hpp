#ifndef STUDENT
#define STUDENT

class Student {
    public:
        Student(int number, int age) : number{ number }, age{ age } {};
        
        int getNumber() const;
        void setNumber(int number);
        
        int getAge() const;
        void setAge(int number);
        
        int getAgeDifference(const Student& otherStudent) const;
        int getFutureAge() const;
    private:
        int number;
        int age;
};

#endif
