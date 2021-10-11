#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int inputHours, inputMinutes;
    cin >> inputHours >> inputMinutes;
    if (inputHours == 0) {
        cout << 0 << " ";
    } else {
        cout << abs(12 - inputHours) << " ";
    }
    if (inputMinutes == 0) {
        cout << 0;
    } else {
        cout << abs(60 - inputMinutes);
    }
    return 0;
}