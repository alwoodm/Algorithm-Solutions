#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int countOccurrences(int number, vector<int> list) {
    int result = 0;
    for (int i = 0; i < list.size(); i++) {
        if (list[i] == number) {
            result++;
        }
    }
    return result;
}

int main() {
    vector<int> inputNumbers;
    for (int i = 0; i < 5; i++) {
        int number;
        cin >> number;
        inputNumbers.push_back(number);
    }
    vector<int> occurrences;
    for (int i = 0; i < 5; i++) {
        occurrences.push_back(countOccurrences(inputNumbers[i], inputNumbers));
    }
    cout << inputNumbers[(max_element(occurrences.begin(), occurrences.end()) - occurrences.begin())] << endl;
    return 0;
}