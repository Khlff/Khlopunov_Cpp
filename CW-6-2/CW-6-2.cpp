#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> wasteErasing(string rawString, int maxLength) {
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
    return wordsList;
}

int main() {
    int maxLength;
    cin >> maxLength;
    string inputString = "Example for you abracadabra";
    vector<string> outputWords = wasteErasing(inputString, maxLength);
    for (int i = 0; i < outputWords.size(); i++) {
        cout << outputWords[i] << ' ';
    }
    return 0;
}

