// Temperatury
#include <iostream>
#include <vector>

using namespace std;

int main() {
    short n, szukana, licznik = 0;
    vector<short> dni;
    cin >> n;
    short listaTemperatur[n];
    for (int i = 0; i < n; i++) {
        cin >> listaTemperatur[i];
    }
    cin >> szukana;
    for (int i = 0; i < n; i++) {
        if (listaTemperatur[i] == szukana) {
            licznik++;
            dni.push_back(i+1);
        }
    }
    cout << licznik << " ";
    for (int i = 0; i < licznik; i++) {
        cout << dni[i] << " ";
    }
    return 0;
}