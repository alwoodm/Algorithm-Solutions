#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int divisor = 1;

    // Find all pairs of divisors
    while (divisor * divisor < n) {
        if (n % divisor == 0) {
            // Output the divisor and its complementary divisor
            cout << divisor << " " << n / divisor << endl;
        }
        divisor++;
    }

    // Handle the case of a perfect square
    if (divisor * divisor == n) {
        cout << divisor << " " << divisor << endl;
    }

    return 0;
}