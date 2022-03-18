#include <iostream>
#include <string>

using namespace std;

string clearString(string inputString) {
    for (int i = 0; i < inputString.length(); i++) {
        if (inputString[i] == '@') {
            inputString.erase(i - 1, 2);
            i -= 2;
        }
    }
    return inputString;
}

int main() {
    string inputString;
    cin >> inputString;
    string outputString = clearString(inputString);
    cout << outputString;
    return 0;
}