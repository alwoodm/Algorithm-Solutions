#include <iostream>
#include <string>

using namespace std;

/**
 * Convert a character digit to its integer value
 */
int charToInt(char digit) {
    return digit - '0';
}

/**
 * Calculate the sum of all digits in a number
 */
int digitSum(unsigned int number) {
    string numString = to_string(number);
    int sum = 0;
    for (char digit : numString) {
        sum += charToInt(digit);
    }
    return sum;
}

int main() {
    unsigned int rangeStart, rangeEnd;
    cin >> rangeStart >> rangeEnd;
    unsigned int counter = 0;

    for (unsigned int i = rangeStart; i <= rangeEnd; i++) {
        bool divisibleBySeven = (i % 7 == 0);
        bool sumDivisibleBySeven = (digitSum(i) % 7 == 0);

        // Count if either condition is met
        if (divisibleBySeven || sumDivisibleBySeven) {
            counter++;
        }
    }

    cout << counter << endl;
    return 0;
}