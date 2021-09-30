#include <iostream>
#include <cmath>

int main() {
    double quadraticСoefficient, linearСoefficient, freeСoefficient;
    std::cin >> quadraticСoefficient >> linearСoefficient >> freeСoefficient;

    if (quadraticСoefficient != 0) {
        double Discriminant = pow(linearСoefficient, 2) - 4 * quadraticСoefficient * freeСoefficient;

        if (Discriminant < 0) {
            return 1;
        }

        double x1 = (-linearСoefficient - sqrt(Discriminant)) / (2 * quadraticСoefficient);
        double x2 = (-linearСoefficient + sqrt(Discriminant)) / (2 * quadraticСoefficient);

        if (x1 == x2) {
            std::cout << x1;
        } else {
            std::cout << x1 << " " << x2;
        }

    } else if (freeСoefficient != 0) {
        std::cout << -freeСoefficient / linearСoefficient;
    } else {
        std::cout << 0;
    }

    return 0;
}
