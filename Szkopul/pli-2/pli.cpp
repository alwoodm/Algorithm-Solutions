#include <iostream>

using namespace std;

int searchUpper(unsigned int number) {
    int index = 0;
    while (true) {
        string number_string = to_string(number);
        bool palindrome = true;
        int i = 0, j = number_string.size() - 1;

        while (i < j) {
            if (number_string[i] != number_string[j]) {
                palindrome = false;
                break;
            }
            i++;
            j--;
        }

        if (palindrome) {
            cout << index << endl;
            return number;
        }

        index++;
        number++;
    }
}

int main() {
    int k;
    bool palindrome = true;
    int i = 0, j;
    cin >> k;
    string k_string = to_string(k);
    j = k_string.size() - 1;

    while (palindrome && i < j) {
        if (tolower(k_string[i]) == tolower(k_string[j])) {
            i++;
            j--;
        } else {
            palindrome = false;
        }
    }
    if (palindrome) {
        cout << "0";
        return 0;
    } else {
        searchUpper(k);
    };
    return 0;
}