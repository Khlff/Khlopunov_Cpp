#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string wasteErasing(string rawString) {
    for (int i = 0; i < rawString.length()-1; i++) {
        if (rawString[i] == ' ' && rawString[i + 1] == ' ') {
            rawString.erase(i, 1);
            i--;
        }
    }
    if (rawString[0] == ' ') {
        rawString.erase(0, 1);
    }
    if (rawString[rawString.length() - 1] == ' ') {
        rawString.erase(rawString.length() - 1, 1);
    }
    return rawString;
}

int main() {
    string inputString = "    Example  for you   ";
    string outputString = wasteErasing(inputString);
    cout << outputString;
    return 0;
}
