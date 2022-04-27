#include "iostream"
#include "rationalNumbers.h"

int main() {
    try {
        rationalNumbers *number1 = new rationalNumbers(12, 12);
        rationalNumbers *number2 = new rationalNumbers(0, 4);
        rationalNumbers *result = number1->divideNumbers(number2);
        std::cout << result->returnRationalNumber(true) << " " << result->returnRationalNumber(false);
    }
    catch (std::runtime_error error){
        std::cerr<< error.what();
        exit(1);
    }
    return 0;
}