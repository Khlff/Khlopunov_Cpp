#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;
    cin >> inputString;
    bool flag = false;
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '(') {
            flag = true;
            continue;
        } else if (inputString[i] == ')') {
            flag = false;
            continue;
        } else if (!flag) {
            cout << inputString[i];
        }
    }
    return 0;
}