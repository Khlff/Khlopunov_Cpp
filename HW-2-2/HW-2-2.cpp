//The first point is the lower left, the following are clockwise
//Example:
//Second Third
//First Fourth

#include <algorithm>
#include <iostream>

int main() {
    int firstXFirst, firstYFirst, firstXSecond, firstYSecond, firstXThird, firstYThird, firstXFourth, firstYFourth,
        secondXFirst, secondYFirst,secondXSecond, secondYSecond, secondXThird, secondYThird, secondXFourth, secondYFourth;

    std::cin >> firstXFirst >> firstYFirst >> firstXSecond >> firstYSecond >> firstXThird >> firstYThird >> firstXFourth >> firstYFourth
             >> secondXFirst >> secondYFirst >> secondXSecond >> secondYSecond >> secondXThird >> secondYThird >> secondXFourth >> secondYFourth;

    int leftEdge = std::max(firstXFirst, secondXFirst);
    int bottomEdge = std::max(firstYFirst, secondYFirst);
    int topEdge = std::min(firstYThird, secondYThird);
    int rightEdge = std::min(firstXFourth, secondXFourth);

    int width = rightEdge - leftEdge;
    int height = topEdge - bottomEdge;

    if (width < 0 or height < 0) {
        std::cout << "NO";
        return 1;
    }
    std::cout << "YES ";
    std::cout << width * height;
    return 0;
}

