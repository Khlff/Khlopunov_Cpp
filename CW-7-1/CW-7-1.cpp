#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> valuesToVector() {
    string rawString;
    getline(cin, rawString, '\n');
    vector<string> outputVector = {};
    string localValue = "";
    for (int i = 0; i < rawString.length(); i++) {
        if (rawString[i] != ' ') {
            localValue += rawString[i];
        } else {
            outputVector.push_back(localValue);
            localValue = "";
        }
    }
    outputVector.push_back(localValue);
    return outputVector;
}

vector<int> stringVectorToIntVector(vector<string> &strVector) {
    vector<int> outputVector;
    for (int i = 0; i < strVector.size(); i++) {
        outputVector.push_back(stoi(strVector[i]));
    }
    return outputVector;
}

string joinVectorValues(vector<string> &inputVector, string separator) {
    string outputString;
    for (int i = 0; i < inputVector.size() - 1; i++) {
        outputString += inputVector[i] + separator;
    }
    outputString += inputVector[inputVector.size() - 1];
    return outputString;
}

void printIntVector(vector<int> &inputVector) {
    for (int i = 0; i < inputVector.size(); i++) {
        cout << inputVector[i] << ' ';
    }
    cout << endl;
}

void printStringVector(vector<string> &inputVector) {
    for (int i = 0; i < inputVector.size(); i++) {
        cout << inputVector[i] << ' ';
    }
    cout << endl;
}

int main() {
    vector<string> valuesVector = valuesToVector();
    printStringVector(valuesVector);

    vector<int> intVector = stringVectorToIntVector(valuesVector);
    printIntVector(intVector);

    string separatedVector = joinVectorValues(valuesVector, "#");
    cout << separatedVector;

    return 0;
}