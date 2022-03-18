#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string inputString;
    cin >> inputString;

    for (int i = 0; i < inputString.length() - 2; i++) {
        if (inputString[i] == inputString[i + 1]) {
            cout << inputString[i + 1] << inputString[i];
            break;
        }
        if (inputString[i] == inputString[i + 2]) {
            if (inputString[inputString.length() - 1] == inputString[inputString.length() - 2]) {
                cout << inputString[inputString.length() - 1] << inputString[inputString.length() - 2];
                break;
            }
            cout << inputString[i] << inputString[i + 1] << inputString[i + 2];
            break;
        }
    }
    if (inputString[inputString.length() - 1] == inputString[inputString.length() - 2]) {
        cout << inputString[inputString.length() - 1] << inputString[inputString.length() - 2];
    }
    return 0;
}