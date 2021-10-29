#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string wasteErasing(string rawString, int maxLength) {
    vector<string> wordsList;
    string tempWord = "";
    for (int i = 0; i < rawString.length(); i++) {
        if (rawString[i] != ' ') {
            tempWord += rawString[i];
        } else {
            if (tempWord.length() < maxLength) {
                tempWord = "";
            } else {
                wordsList.push_back(tempWord);
                tempWord = "";
            }
        }
    }
    if (tempWord.length() > maxLength) {
        wordsList.push_back(tempWord);
    }
    string outputString = "";
    for (int i = 0; i < wordsList.size(); i++) {
        outputString += wordsList[i] + ' ';
    }

    return outputString;
}

int main() {
    int maxLength;
    cin >> maxLength;
    string inputString = "Example for you abracadabra";
    string outputWords = wasteErasing(inputString, maxLength);
    cout << outputWords;
    return 0;
}

