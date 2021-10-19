#include <iostream>
#include <vector>

using namespace std;

vector<int> insertSort(vector<int> inputVector) {
    for (int i = 1; i < 10; i++) {
        for (int j = i; j > 0; j--) {
            if (inputVector[j] < inputVector[j - 1]) {
                swap(inputVector[j], inputVector[j - 1]);
            } else {
                break;
            }
        }

    }
    return inputVector;
}

int main() {
    vector<int> inputVector = {};
    int count = 0;
    while (count < 10) {
        int a;
        cin >> a;
        inputVector.push_back(a);
        count++;
    }
    vector<int> outputVector = insertSort(inputVector);
    for (int i = 0; i < outputVector.size(); i++) {
        cout << outputVector[i] << " ";
    }
    return 0;
}