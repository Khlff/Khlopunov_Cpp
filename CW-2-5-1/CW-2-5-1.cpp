#include "iostream"
#include "rationalNumbers.h"

int main() {
    rationalNumbers *number1 = new rationalNumbers(12, 12);
    rationalNumbers *number2 = new rationalNumbers(-8, 4);
    rationalNumbers *result = number1->divideNumbers(number2);
    std::cout << result->returnRationalNumber(true) << " " << result->returnRationalNumber(false);

    return 0;
}