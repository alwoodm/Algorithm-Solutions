#include <iostream>
#include <vector>

using namespace std;

int main() {
    short n, target, counter = 0;
    vector<short> days;
    cin >> n;
    short temperatureList[n];
    for (int i = 0; i < n; i++) {
        cin >> temperatureList[i];
    }
    cin >> target;
    for (int i = 0; i < n; i++) {
        if (temperatureList[i] == target) {
            counter++;
            days.push_back(i+1);
        }
    }
    cout << counter << " ";
    for (int i = 0; i < counter; i++) {
        cout << days[i] << " ";
    }
    return 0;
}