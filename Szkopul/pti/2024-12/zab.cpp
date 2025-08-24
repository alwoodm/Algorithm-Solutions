// Skaczące żabki
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long ileDoPrzodu, ileDoTylu, ileRazy, wynik = 0;
        cin >> ileDoPrzodu >> ileDoTylu >> ileRazy;

        wynik += ileDoPrzodu * (ileRazy/2);
        wynik -= ileDoTylu * (ileRazy/2);

        if (ileRazy % 2 != 0) {
            wynik += ileDoPrzodu;
        }

        cout << wynik << endl;
    }

    return 0;
}