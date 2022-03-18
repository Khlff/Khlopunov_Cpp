#include "iostream"
#include <map>
#include <string>
#include <vector>

using namespace std;


string FromArabicToRoman(int inputNumber) {

    map<int, string> dictionary;
    dictionary[1] = "I";
    dictionary[4] = "IV";
    dictionary[5] = "V";
    dictionary[9] = "IX";
    dictionary[10] = "X";
    dictionary[40] = "XL";
    dictionary[50] = "L";
    dictionary[90] = "XC";
    dictionary[100] = "C";
    dictionary[400] = "CD";
    dictionary[500] = "D";
    dictionary[900] = "CM";
    dictionary[1000] = "M";

    string res;
    vector<int> numbers = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    for (int number: numbers) {
        if (inputNumber / number != 0) {
            int count = inputNumber / number;
            while (count) {
                res += dictionary[number];
                count--;
            }
            inputNumber -= inputNumber / number * number;
        }
    }

    return res;
}

int FromRomanToArabic(string inputNumberInRoman) {
    map<string, int> dictionary;
    dictionary["I"] = 1;
    dictionary["V"] = 5;
    dictionary["X"] = 10;
    dictionary["L"] = 50;
    dictionary["C"] = 100;
    dictionary["D"] = 500;
    dictionary["M"] = 1000;
    int res = 0;
    for (int i = inputNumberInRoman.length() - 1; i >= 0; i--) {
        string currentSymbol, nextSymbol;
        currentSymbol += inputNumberInRoman[i];
        nextSymbol += inputNumberInRoman[i - 1];
        if (dictionary[nextSymbol] < dictionary[currentSymbol]) {
            res += dictionary[currentSymbol] - dictionary[nextSymbol];
            i--;
        } else {
            res += dictionary[currentSymbol];
        }
    }
    return res;
}

int main() {
    string inputString;
    getline(cin, inputString);
    string typeOfNumber;
    string inputNumber;
    bool flag = true;
    for (char i: inputString) {
        if (i != ' ' && flag)
            typeOfNumber += i;
        else if (!flag)
            inputNumber += i;
        else
            flag = false;
    }
    if (typeOfNumber == "arab") {
        cout << FromArabicToRoman(stoi(inputNumber));
    } else if (typeOfNumber == "rim") {
        cout << FromRomanToArabic(inputNumber);
    }
    else
        return 1;
    return 0;
}

