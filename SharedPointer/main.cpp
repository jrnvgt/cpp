#include "widget.hpp"
#include <iostream>
#include <memory>
#include <string>

int main() {
    auto mainPointer = std::make_shared<Widget>("Nice weather today.");
    fun(mainPointer);
    
    std::cout << mainPointer.use_count() << std::endl;
}

Widget::Widget(const std::string& message) : message{ message } {}

const std::string& Widget::getMessage() const {
    return message;
}

void fun(std::shared_ptr<Widget> pointer) {
    std::cout << pointer->getMessage() << std::endl;
    std::cout << pointer.use_count() << std::endl;
}
