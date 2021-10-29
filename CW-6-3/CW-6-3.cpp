#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string wordsReversing(string rawString) {
    vector<string> wordsList;
    string tempWord = "";
    for (int i = 0; i < rawString.length(); i++) {
        if (rawString[i] != ' ') {
            tempWord += rawString[i];
        } else {
            string reversedWorld = "";
            for (int m = tempWord.length() - 1; m >= 0; m--) {
                reversedWorld += tempWord[m];
            }
            wordsList.push_back(reversedWorld);
            tempWord = "";
        }
    }
    string reversedWorld = "";
    for (int m = tempWord.length() - 1; m >= 0; m--) {
        reversedWorld += tempWord[m];
    }
    wordsList.push_back(reversedWorld);

    string outputString = "";
    for (int i = 0; i < wordsList.size(); i++) {
        outputString += wordsList[i] + ' ';
    }

    return outputString;
}

int main() {
    string inputString = "Example for you abracadabra";
    string outputWords = wordsReversing(inputString);
    cout << outputWords;
    return 0;
}