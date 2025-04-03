#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    unsigned int n; // n - number of test cases
    cin >> n;
    vector<int> answers;

    // main loop - for each test case
    for (unsigned int i = 0; i < n; i++) {
        unsigned long long a, b; // Using long long for large numbers
        cin >> a >> b;

        string a_str = to_string(a);
        string b_str = to_string(b);

        // Zero padding to make strings equal length
        if (a_str.size() < b_str.size()) {
            a_str.insert(0, b_str.size() - a_str.size(), '0');
        } else if (b_str.size() < a_str.size()) {
            b_str.insert(0, a_str.size() - b_str.size(), '0');
        }

        int carryCount = 0; // Variable to count carries
        int carry = 0; // Stores the current carry

        // Check each digit position
        for (int j = a_str.size() - 1; j >= 0; j--) {
            int a_digit = a_str[j] - '0'; // Convert char to int
            int b_digit = b_str[j] - '0'; // Convert char to int

            if (a_digit + b_digit + carry >= 10) {
                carry = 1;
                carryCount++; // Increment carry count only when carry occurs
            } else {
                carry = 0;
            }
        }

        // store the answer
        answers.push_back(carryCount);
    }

    // Display the answers
    for (int i = 0; i < answers.size(); i++) {
        cout << answers[i] << endl;
    }

    return 0;
}