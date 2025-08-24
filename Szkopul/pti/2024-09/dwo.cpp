// Dwójki
#include <iostream>
using namespace std;

int main() {
    unsigned long long x, potega = 1;
    int licznik = 0;
    cin >> x;
    while (potega <= x) {
        licznik++;
        potega *= 2;
    }
    cout << licznik;
    return 0;
}