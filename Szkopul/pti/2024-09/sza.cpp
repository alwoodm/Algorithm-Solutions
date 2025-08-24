// Szachownica
#include <iostream>

using namespace std;

int main() {
    unsigned long long n;
    cin >> n;

    for (unsigned long long i = 0; i < n; i++) {
        for (unsigned long long j = 0; j < n; j++) {
            if ((i + j) % 2 == 0) {
                cout << "0";
            } else {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}