// Złoty talerz
#include <iostream>

using namespace std;

int main() {
    unsigned int szerokosc, wysokosc, ilePierscieniNaTelerzu;
    cin >> szerokosc >> wysokosc >> ilePierscieniNaTelerzu;

    int ilePolZapelnionych=0;

    for (int i = 0; i < ilePierscieniNaTelerzu; i++) {
        ilePolZapelnionych += ((szerokosc*2) + (wysokosc*2) - 4);
        wysokosc -= 4;
        szerokosc -= 4;
    }

    cout << ilePolZapelnionych << endl;
    return 0;
}