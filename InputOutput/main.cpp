#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

int main() {
    std::ifstream file{ "input.txt" };
    std::istream_iterator<int> inputBegin{ file };
    std::istream_iterator<int> inputEnd;
    std::ostream_iterator<int> outputBegin{ std::cout, "\n" };

    //std::copy(inputBegin, inputEnd, outputBegin);

    //std::copy_if(inputBegin, inputEnd, outputBegin, [](int number) { return number % 2 == 0; });

    //std::transform(inputBegin, inputEnd, outputBegin, [](int number) { return number * 2; });

    //std::sort(inputBegin, inputEnd);

    //std::vector<int> vector;
    //std::copy(inputBegin, inputEnd, std::back_inserter(vector));

    //std::sort(vector.begin(), vector.end());
    //std::copy(vector.begin(), vector.end(), outputBegin);

    int product{ std::accumulate(inputBegin, inputEnd, 1, std::multiplies<int>()) };
    *outputBegin = product;
    ++outputBegin;
}
