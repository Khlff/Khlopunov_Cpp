#include <iostream>
#include <cmath>

int main() {
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    double sideA = sqrt(((pow((x2 - x1), 2)) + pow((y2 - y1), 2)));
    double sideB = sqrt(((pow((x3 - x2), 2)) + pow((y3 - y2), 2)));
    double sideC = sqrt(((pow((x3 - x1), 2)) + pow((y3 - y1), 2)));

    double pP = (sideA + sideB + sideC) / 2;
    double distanceOtv = 2 * sqrt(pP * (pP - sideA) * (pP - sideB) * (pP - sideC)) / sideA;
    double smallFormula = ((x2 - x1) * (x3 - x1) + (y2 - y1) * (y3 - y1)) / ((pow((x2 - x1), 2) + pow((y2 - y1), 2)));


    std::cout << distanceOtv << "\n";
    std::cout << "Точка, на которую опущен перпендикуляр из точки C: " << x1 + ((x2 - x1) * smallFormula) << " , "
              << y1 + ((y2 - y1) * smallFormula);


    return 0;
}

