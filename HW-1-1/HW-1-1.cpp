#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    if (a != 0) {
        double Discriminant = pow(b, 2) - 4 * a * c;

        if (Discriminant < 0) {
            return 1;
        }

        double x1 = (-b - sqrt(Discriminant)) / (2 * a);
        double x2 = (-b + sqrt(Discriminant)) / (2 * a);

        if (x1 == x2) {
            std::cout << x1;
        } else {
            std::cout << x1 << " " << x2;
        }

    } else {
        std::cout << -c / b;
    }


    return 0;
}
