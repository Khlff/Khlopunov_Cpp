#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

template<typename T>
inline std::string ToString(T tX) {
    std::ostringstream oStream;
    oStream << tX;
    return oStream.str();
}

int main() {
    int inputNumber, numberSystem;
    std::cin >> inputNumber >> numberSystem;
    std::string answer;

    while (inputNumber >= numberSystem) {
        answer = ToString(inputNumber % numberSystem) + answer;
        inputNumber = inputNumber / numberSystem;
    }
    answer = ToString(inputNumber) + answer;
    std::cout << answer;
    return 0;
}