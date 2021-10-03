#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string inputString;
    std::cin >> inputString;

    int fCount = 0;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == 'f') {
            fCount++;
        }
        if (fCount == 2) {
            std::cout << i;
            return 0;
        }
    }
    if (fCount == 1) {
        std::cout << -1;
        return 0;
    }
    if (fCount == 0) {
        std::cout << -2;
        return 0;
    }
    return 1;
}