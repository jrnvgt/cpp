#ifndef WIDGET
#define WIDGET
#include <memory>
#include <string>

class Widget {
    public:
        Widget(const std::string& message);
        const std::string& getMessage() const;
    private:
        std::string message;
};

void fun(std::shared_ptr<Widget> pointer);

#endif
