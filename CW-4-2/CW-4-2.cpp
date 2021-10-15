#include <iostream>
#include <vector>

using namespace std;

int main() {
    int numberOfDays;
    cin >> numberOfDays;
    float sumOfTemperature = 0;
    vector<float> temperature;

    for (int i = 0; i < numberOfDays; i++) {
        float local;
        cin >> local;
        sumOfTemperature += local;
        temperature.push_back(local);
    }

    vector<float> outputTemperaturesIndex;
    int count = 0;
    float average = sumOfTemperature / temperature.size();

    for (int i = 0; i < temperature.size(); i++) {
        if (temperature[i] > average) {
            count++;
            outputTemperaturesIndex.push_back(i);
        }
    }
    cout << count << endl;
    for (int i = 0; i < outputTemperaturesIndex.size(); i++) {
        cout << outputTemperaturesIndex[i] << " ";
    }
    return 0;
}
