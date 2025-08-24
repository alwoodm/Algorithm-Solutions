// Gorączka zakupów
#include <iostream>

using namespace std;

int main() {
    short n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        long long s, a, b, c;
        cin >> s >> a >> b >> c;
        // s - budżet całkowity
        // a - ile do promocji wymaga
        // b - ile gratis
        // c - cena each ubranie
        long long cenaZaUbrania = c;
        long long kupione = (s/(a * c))*a;
        long long reszta = (s%(a * c)) / c;
        long long gratis = (s/(a*c)) * b;
        long long ileRazemUbran = kupione + gratis + reszta;
        cout << ileRazemUbran << endl;
    }

    return 0;
}