#include <algorithm>
#include <iostream>

int main() {
    //    Dots
    //|Second Third|
    //|First Fourth|

    //f-first rectangle, s-second rectangle

    int fXFirst, fYFirst, fXSecond, fYSecond, fXThird, fYThird, fXFourth, fYFourth, sXFirst, sYFirst, sXSecond, sYSecond, sXThird, sYThird, sXFourth, sYFourth;
    std::cin >> fXFirst >> fYFirst >> fXSecond >> fYSecond >> fXThird >> fYThird >> fXFourth >> fYFourth >> sXFirst
             >> sYFirst >> sXSecond >> sYSecond >> sXThird >> sYThird >> sXFourth >> sYFourth;

    int leftEdge = std::max(fXFirst, sXFirst);
    int bottomEdge = std::max(fYFirst, sYFirst);
    int topEdge = std::min(fYThird, sYThird);
    int rightEdge = std::min(fXFourth, sXFourth);

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
