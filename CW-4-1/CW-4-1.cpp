#include <iostream>
#include <vector>

using namespace std;

vector<string> palindromeFilter(int minLength, vector<string> words) {
    vector<string> outputVector = {};
    for (int i = 0; i < words.size(); i++) {
        bool isPalindrome = true;
        if (words[i].length() <= minLength) {
            continue;
        } else {
            string inputString = words[i];
            for (int j = 0; j <= (inputString.length() / 2); j++) {
                if (inputString[j] != inputString[inputString.length() - j - 1]) {
                    isPalindrome = false;
                    break;
                }
            }
            if (isPalindrome) {
                outputVector.push_back(words[i]);
            }
        }
    }
    return outputVector;
}

int main() {
    int min;
    cin >> min;
    vector<string> inputVector = {"weew", "aba", "bro"};
    vector<string> answerVector = palindromeFilter(min, inputVector);
    for (int i = 0; i < answerVector.size(); i++) {
        cout << answerVector[i] << " ";
    }
    return 0;
}