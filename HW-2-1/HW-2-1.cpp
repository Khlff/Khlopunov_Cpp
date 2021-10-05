#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int inputNumber, numberSystem;
    std::cin >> inputNumber >> numberSystem;
    std::string answer;

    while (inputNumber >= numberSystem) {
        answer += std::to_string(inputNumber % numberSystem);
        inputNumber = inputNumber / numberSystem;
    }
    answer += std::to_string(inputNumber);

    std::reverse(answer.begin(), answer.end());
    std::cout << answer;
    return 0;
}