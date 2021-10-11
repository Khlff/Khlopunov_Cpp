#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int inputHours;
    cin >> inputHours;
    formulaBine= (pow(((1+pow(5,0.5))/2),inputHours)-pow(((1-pow(5,0.5))/2),inputHours))/pow(5,0.5);
    cout << formulaBine;
    return 0;
}