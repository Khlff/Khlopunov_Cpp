#include <iostream>
#include <cmath>

int main() {
    double quadCoeff, linСoeff, freeCoeff;
    std::cin >> quadCoeff >> linСoeff >> freeCoeff;

    if (quadCoeff != 0) {
        double discriminant = pow(linСoeff, 2) - 4 * quadCoeff * freeCoeff;

        if (discriminant < 0) {
            return 1;
        }

        double x1 = (-linСoeff - sqrt(discriminant)) / (2 * quadCoeff);
        double x2 = (-linСoeff + sqrt(discriminant)) / (2 * quadCoeff);

        if (x1 == x2) {
            std::cout << x1;
        } else {
            std::cout << x1 << " " << x2;
        }

    } else if (linСoeff != 0) {
        std::cout << -freeCoeff / linСoeff;
    } else {
        return 1
    }

    return 0;
}
