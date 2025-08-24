// Dzielniki
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int dzielnik = 1;

    while (dzielnik * dzielnik < n) {
        if (n % dzielnik == 0) {
            cout << dzielnik << endl;
        }
        dzielnik++;
    }

    if (dzielnik * dzielnik == n) {
        cout << dzielnik << endl;
    }

    dzielnik--;

    while (dzielnik > 0) {
        if (n % dzielnik == 0) {
            cout << n / dzielnik << endl;
        }
        dzielnik--;
    }

    return 0;
}