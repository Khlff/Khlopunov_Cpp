#include <iostream>

int main() {
    double purchaseSum, firstSumSale, secondSumSale, smallDiscount, bigDiscount;
    std::cin >> purchaseSum >> firstSumSale >> secondSumSale >> smallDiscount >> bigDiscount;

    if (purchaseSum > secondSumSale) {
        std::cout << (purchaseSum * (1 - bigDiscount / 100));
    }
    else if (purchaseSum > firstSumSale) {
        std::cout << purchaseSum * (1 - smallDiscount / 100);
    }
    else {
        std::cout << purchaseSum;
    }

    return 0;
}
