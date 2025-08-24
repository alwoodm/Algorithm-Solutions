// Gra w siedem
#include <iostream>
#include <string>

using namespace std;

int charToInt(char znak) {
    return znak - '0';
}

int sumaZLiczb(unsigned int liczba) {
    string lString = to_string(liczba);
    int suma = 0;
    for (char znak : lString) {
        suma += charToInt(znak);
    }
    return suma;
}

int main() {
    unsigned int iOd, iDo;
    cin >> iOd >> iDo;
    unsigned int licznik = 0;

    for (unsigned int i = iOd; i <= iDo; i++) {
        bool podzielnePrzez7 = (i % 7 == 0);
        bool sumaPodzielnaPrzez7 = (sumaZLiczb(i) % 7 == 0);

        if (podzielnePrzez7 || sumaPodzielnaPrzez7) {
            licznik++;
        }
    }

    cout << licznik << endl;
    return 0;
}