#include <iostream>
#include <cmath>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    double Discriminant = pow(b,2)-4*a*c;
    double x1= (-b - sqrt(Discriminant))/(2*a);
    double x2= (-b + sqrt(Discriminant))/(2*a);

    std::cout << x1 << " " << x2;

    return 0;
}
