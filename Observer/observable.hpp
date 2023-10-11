#ifndef OBSERVABLE
#define OBSERVABLE
#include <functional>
#include <vector>

class Observable {
    public:
        Observable(int value);

        template<typename Observer> void addObserver(Observer observer) {
            observers.emplace_back(observer);
        }

        void setValue(int value);
    private:
        std::vector<std::function<void(int)>> observers;
        int value;
};

#endif
