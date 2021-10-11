#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;
    cin >> inputString;

    for (int i = 0; i <= (inputString.length() / 2); i++) {
        if (inputString[i] != inputString[inputString.length() - i - 1]) {
            cout << "False";
            return 1;
        }
    }
    cout << "True";
    return 0;
}
