#ifndef FUN
#define FUN
#include <algorithm>
#include <functional>
#include <iterator>
#include <numeric>
#include <vector>

namespace Function {
    template<class T, class M> std::vector<M> map(const std::vector<T>& sequence, std::function<M(T)> function) {
        std::vector<M> result;
        std::transform(sequence.begin(), sequence.end(), std::back_inserter(result), function);

        return result;
    }

    template<class T> std::vector<T> filter(const std::vector<T>& sequence, std::function<bool(T)> function) {
        std::vector<T> result;
        std::copy_if(sequence.begin(), sequence.end(), std::back_inserter(result), function);

        return result;
    }

    template<class T, class R> R reduce(const std::vector<T>& sequence, R seed, std::function<R(T, R)> function) {
        return std::accumulate(sequence.begin(), sequence.end(), seed, function);
    }
}

void showVector(const std::vector<int>& vector);

#endif
