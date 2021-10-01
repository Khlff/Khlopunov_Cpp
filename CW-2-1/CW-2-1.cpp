#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string firstString, secondString, thirdString;
    std::cin >> firstString >> secondString >> thirdString;
    std::cout << std::min(std::min(firstString, secondString), thirdString);
    return 0;
}
