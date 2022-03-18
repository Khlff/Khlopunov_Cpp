#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int numberInSequence;
    cin >> numberInSequence;
    double formulaBine =
            (pow(((1 + pow(5, 0.5)) / 2), numberInSequence) - pow(((1 - pow(5, 0.5)) / 2), numberInSequence)) /
             pow(5, 0.5);
    cout << formulaBine;
    return 0;
}