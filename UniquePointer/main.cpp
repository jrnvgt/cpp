#include "widget.hpp"
#include <iostream>
#include <memory>
#include <string>
#include <utility>

int main() {
    auto mainPointer = std::make_unique<Widget>("Nice weather today.");
    fun(std::move(mainPointer));
}

Widget::Widget(const std::string& message) : message{ message } {}

const std::string& Widget::getMessage() const {
    return message;
}

void fun(std::unique_ptr<Widget>&& pointer) {
    std::cout << pointer->getMessage() << std::endl;
}
