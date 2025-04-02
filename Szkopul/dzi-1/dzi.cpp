#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int divisor = 1;

    while (divisor * divisor < n) {
        if (n % divisor == 0) {
            cout << divisor << endl;
        }
        divisor++;
    }

    if (divisor * divisor == n) {
        cout << divisor << endl;
    }

    divisor--;

    while (divisor > 0) {
        if (n % divisor == 0) {
            cout << n / divisor << endl;
        }
        divisor--;
    }

    return 0;
}