// Dwa podzielniki
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int dzielnik = 1;

    while (dzielnik * dzielnik < n) {
        if (n % dzielnik == 0) {
            cout << dzielnik << " " << n / dzielnik << endl;
        }
        dzielnik++;
    }

    if (dzielnik * dzielnik == n) {
        cout << dzielnik << " " << dzielnik << endl;
    }

    return 0;
}