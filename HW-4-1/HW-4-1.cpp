#include <iostream>
#include <vector>

using namespace std;

vector<int> bubbleSort(vector<int> inputVector) {
    for (int run = 0; run < 10; run++) {
        for (int i = 0; i < 9; i++) {
            if (inputVector[i] > inputVector[i + 1]) {
                swap(inputVector[i], inputVector[i + 1]);
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
    vector<int> outputVector = bubbleSort(inputVector);
    for (int i = 0; i < outputVector.size(); i++) {
        cout << outputVector[i] << " ";
    }
    return 0;
}