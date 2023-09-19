#include "student.hpp"
#include <iostream>

int main() {
    Student* student1 = new Student{ 1, 18 };
    Student* student2 = new Student{ 2, 21 };

    std::cout << "Number: " << student1->getNumber() << std::endl;
    std::cout << "Age: " << student1->getAge() << std::endl;
    std::cout << "Difference: " << student1->getAgeDifference(*student2) << std::endl;
    std::cout << "Future age: " << student1->getFutureAge() << std::endl;

    std::cout << "Number: " << student2->getNumber() << std::endl;
    std::cout << "Age: " << student2->getAge() << std::endl;
    std::cout << "Difference: " << student2->getAgeDifference(*student1) << std::endl;
    std::cout << "Future age: " << student2->getFutureAge() << std::endl;

    delete student1;
    delete student2;
}

int Student::getNumber() const {
    return number;
}

void Student::setNumber(int number) {
    this->number = number;
}

int Student::getAge() const {
    return age;
}

void Student::setAge(int number) {
    this->age = number;
}

int Student::getAgeDifference(const Student& otherStudent) const {
    if (age < otherStudent.getAge()) {
        return otherStudent.getAge() - age;
    }

    return age - otherStudent.getAge();
}

int Student::getFutureAge() const {
    return age + 1;
}
