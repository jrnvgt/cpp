#ifndef LAMBDA
#define LAMBDA

template<typename I, typename F> void forAll(I begin, I end, F function) {
    while (begin != end) {
        function(*begin);
        ++begin;
    }
}

#endif
